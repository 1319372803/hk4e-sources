// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/array.c

// Line 48: range 000000000CFB50F0-000000000CFB5187
my_bool __fastcall init_dynamic_array2(
        DYNAMIC_ARRAY *array,
        uint element_size,
        void *init_buffer,
        uint init_alloc,
        uint alloc_increment)
{
  uchar *v5; // rax

  if ( alloc_increment )
    goto LABEL_5;
  alloc_increment = 16;
  if ( 0x1FF8 / element_size >= 0x10 )
    alloc_increment = 0x1FF8 / element_size;
  if ( init_alloc <= 8 )
  {
LABEL_5:
    if ( !init_alloc )
    {
      array->elements = 0;
      array->max_element = alloc_increment;
      init_alloc = alloc_increment;
      array->alloc_increment = alloc_increment;
      array->size_of_element = element_size;
      array->buffer = 0LL;
      goto LABEL_7;
    }
  }
  else if ( alloc_increment > 2 * init_alloc )
  {
    alloc_increment = 2 * init_alloc;
  }
  array->elements = 0;
  array->max_element = init_alloc;
  array->alloc_increment = alloc_increment;
  array->size_of_element = element_size;
  array->buffer = (uchar *)init_buffer;
  if ( init_buffer )
    return 0;
LABEL_7:
  v5 = (uchar *)my_malloc(element_size * init_alloc, 0);
  array->buffer = v5;
  if ( !v5 )
    array->max_element = 0;
  return 0;
};

// Line 77: range 000000000CFB5190-000000000CFB5197
my_bool __fastcall init_dynamic_array(DYNAMIC_ARRAY *array, uint element_size, uint init_alloc, uint alloc_increment)
{
  return init_dynamic_array2(array, element_size, 0LL, init_alloc, alloc_increment);
};

// Line 96: range 000000000CFB5230-000000000CFB5285
my_bool __fastcall insert_dynamic(DYNAMIC_ARRAY *array, uchar *element)
{
  uint elements; // eax
  size_t size_of_element; // rdx
  uchar *v5; // rdi

  elements = array->elements;
  if ( elements != array->max_element )
  {
    size_of_element = array->size_of_element;
    v5 = &array->buffer[elements * array->size_of_element];
    array->elements = elements + 1;
LABEL_3:
    memcpy(v5, element, size_of_element);
    return 0;
  }
  v5 = alloc_dynamic(array);
  if ( v5 )
  {
    size_of_element = array->size_of_element;
    goto LABEL_3;
  }
  return 1;
};

// Line 131: range 000000000CFB51A0-000000000CFB522F
uchar *__fastcall alloc_dynamic(DYNAMIC_ARRAY *array)
{
  uint elements; // esi
  uchar *buffer; // rax
  uint v4; // edx
  __int64 v5; // rsi
  DYNAMIC_ARRAY *v7; // rdi
  uint v8; // esi
  uchar *v9; // rcx
  uint alloc_increment; // eax
  void *v11; // rax

  elements = array->elements;
  if ( elements != array->max_element )
  {
    buffer = array->buffer;
LABEL_3:
    v4 = elements + 1;
    v5 = array->size_of_element * elements;
    array->elements = v4;
    return &buffer[v5];
  }
  v7 = (DYNAMIC_ARRAY *)array->buffer;
  v8 = array->alloc_increment + elements;
  if ( v7 == &array[1] )
  {
    v11 = my_malloc(array->size_of_element * v8, 16);
    if ( v11 )
    {
      v9 = (uchar *)memcpy(v11, array->buffer, array->elements * array->size_of_element);
      goto LABEL_6;
    }
  }
  else
  {
    v9 = (uchar *)my_realloc(v7, array->size_of_element * v8, 80);
    if ( v9 )
    {
LABEL_6:
      alloc_increment = array->alloc_increment;
      array->buffer = v9;
      array->max_element += alloc_increment;
      elements = array->elements;
      buffer = v9;
      goto LABEL_3;
    }
  }
  return 0LL;
};

// Line 176: range 000000000CFB5290-000000000CFB52B2
uchar *__fastcall pop_dynamic(DYNAMIC_ARRAY *array)
{
  uint elements; // edx
  uint v2; // edx
  uchar *buffer; // rax

  elements = array->elements;
  if ( !elements )
    return 0LL;
  v2 = elements - 1;
  buffer = array->buffer;
  array->elements = v2;
  return &buffer[array->size_of_element * v2];
};

// Line 200: range 000000000CFB5350-000000000CFB53B8
my_bool __fastcall set_dynamic(DYNAMIC_ARRAY *array, uchar *element, uint idx)
{
  uint elements; // edi
  my_bool result; // al
  my_bool dynamic; // dl

  elements = array->elements;
  if ( elements > idx )
    goto LABEL_4;
  if ( idx < array->max_element )
  {
LABEL_3:
    memset(&array->buffer[array->size_of_element * elements], 0, array->size_of_element * (idx - elements));
    array->elements = idx + 1;
LABEL_4:
    memcpy(&array->buffer[array->size_of_element * idx], element, array->size_of_element);
    return 0;
  }
  dynamic = allocate_dynamic(array, idx);
  result = 1;
  if ( !dynamic )
  {
    elements = array->elements;
    goto LABEL_3;
  }
  return result;
};

// Line 232: range 000000000CFB52C0-000000000CFB534A
my_bool __fastcall allocate_dynamic(DYNAMIC_ARRAY *array, uint max_elements)
{
  uint alloc_increment; // ecx
  uchar *buffer; // rdi
  uint v5; // ebp
  uchar *v6; // rcx
  void *v8; // rax

  if ( array->max_element > max_elements )
    return 0;
  alloc_increment = array->alloc_increment;
  buffer = array->buffer;
  v5 = alloc_increment * ((max_elements + alloc_increment) / alloc_increment);
  if ( buffer == (uchar *)&array[1] )
  {
    v8 = my_malloc(array->size_of_element * v5, 16);
    if ( !v8 )
      return 0;
    v6 = (uchar *)memcpy(v8, array->buffer, array->elements * array->size_of_element);
LABEL_4:
    array->buffer = v6;
    array->max_element = v5;
    return 0;
  }
  v6 = (uchar *)my_realloc(buffer, array->size_of_element * v5, 80);
  if ( v6 )
    goto LABEL_4;
  return 1;
};

// Line 278: range 000000000CFB53C0-000000000CFB53E8
void __fastcall get_dynamic(DYNAMIC_ARRAY *array, uchar *element, uint idx)
{
  if ( array->elements <= idx )
    memset(element, 0, array->size_of_element);
  else
    memcpy(element, &array->buffer[idx * array->size_of_element], array->size_of_element);
};

// Line 299: range 000000000CFB53F0-000000000CFB5420
void __fastcall delete_dynamic(DYNAMIC_ARRAY *array)
{
  DYNAMIC_ARRAY *buffer; // rdi

  buffer = (DYNAMIC_ARRAY *)array->buffer;
  if ( buffer != &array[1] )
  {
    if ( !buffer )
      return;
    my_free(buffer);
    array->buffer = 0LL;
    array->max_element = 0;
  }
  array->elements = 0;
};

// Line 325: range 000000000CFB5430-000000000CFB5450
void __fastcall delete_dynamic_element(DYNAMIC_ARRAY *array, uint idx)
{
  __int64 size_of_element; // rcx
  uint v3; // edx
  uchar *v4; // rax

  size_of_element = array->size_of_element;
  v3 = array->elements - 1;
  v4 = &array->buffer[(unsigned int)size_of_element * idx];
  array->elements = v3;
  memmove(v4, &v4[size_of_element], (unsigned int)size_of_element * (v3 - idx));
};

// Line 342: range 000000000CFB5460-000000000CFB54A9
void __fastcall freeze_size(DYNAMIC_ARRAY *array)
{
  uint elements; // ebp
  DYNAMIC_ARRAY *buffer; // rdi
  uchar *v4; // rax

  elements = 1;
  if ( array->elements )
    elements = array->elements;
  buffer = (DYNAMIC_ARRAY *)array->buffer;
  if ( buffer != &array[1] && buffer && array->max_element != elements )
  {
    v4 = (uchar *)my_realloc(buffer, array->size_of_element * elements, 16);
    array->max_element = elements;
    array->buffer = v4;
  }
};

// Line 374: range 000000000CFB54B0-000000000CFB54E5
int __fastcall get_index_dynamic(DYNAMIC_ARRAY *array, uchar *element)
{
  int v2; // ecx

  if ( array->buffer > element )
    return -1;
  v2 = -1;
  if ( (element - array->buffer) / array->size_of_element <= (unsigned __int64)array->elements )
    return (element - array->buffer) / array->size_of_element;
  return v2;
};
