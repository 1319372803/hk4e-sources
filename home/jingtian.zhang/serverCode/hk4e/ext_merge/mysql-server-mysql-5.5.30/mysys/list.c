// File: /home/jingtian.zhang/serverCode/hk4e/ext_merge/mysql-server-mysql-5.5.30/mysys/list.c

// Line 31: range 000000000CFB86F0-000000000CFB871B
LIST *__fastcall list_add(LIST *root, LIST *element)
{
  LIST *result; // rax
  st_list *prev; // rdx

  result = element;
  if ( root )
  {
    prev = root->prev;
    if ( root->prev )
      prev->next = element;
    element->prev = prev;
    root->prev = element;
    element->next = root;
  }
  else
  {
    element->prev = 0LL;
    element->next = 0LL;
  }
  return result;
};

// Line 47: range 000000000CFB8720-000000000CFB874F
LIST *__fastcall list_delete(LIST *root, LIST *element)
{
  st_list *prev; // rdx
  LIST *result; // rax
  st_list *next; // rcx

  prev = element->prev;
  result = root;
  if ( element->prev )
    prev->next = element->next;
  else
    result = element->next;
  next = element->next;
  if ( next )
    next->prev = prev;
  return result;
};

// Line 58: range 000000000CFB8760-000000000CFB87AB
void __fastcall list_free(LIST *root, uint free_data)
{
  LIST *v2; // rbx
  LIST *next; // rbp

  v2 = root;
  if ( root )
  {
    while ( 1 )
    {
      next = v2->next;
      if ( free_data )
      {
        my_free(v2->data);
        my_free(v2);
        if ( !next )
          return;
      }
      else
      {
        my_free(v2);
        if ( !next )
          return;
      }
      v2 = next;
    }
  }
};

// Line 72: range 000000000CFB87B0-000000000CFB87F0
LIST *__fastcall list_cons(void *data, LIST *list)
{
  LIST *v2; // rax

  v2 = (LIST *)my_malloc(0x18uLL, 8);
  if ( !v2 )
    return 0LL;
  v2->data = data;
  return list_add(list, v2);
};

// Line 86: range 000000000CFB8800-000000000CFB8826
LIST *__fastcall list_reverse(LIST *root)
{
  LIST *result; // rax
  st_list *next; // rdx

  result = root;
  if ( root )
  {
    while ( 1 )
    {
      next = result->next;
      result->next = result->prev;
      result->prev = next;
      if ( !next )
        break;
      result = next;
    }
  }
  return result;
};

// Line 99: range 000000000CFB8830-000000000CFB884E
uint __fastcall list_length(LIST *list)
{
  uint result; // eax

  for ( result = 0; list; ++result )
    list = list->next;
  return result;
};

// Line 105: range 000000000CFB8850-000000000CFB888E
int __fastcall list_walk(LIST *list, list_walk_action action, uchar *argument)
{
  LIST *v4; // rbx
  int result; // eax

  v4 = list;
  if ( !list )
    return 0;
  while ( 1 )
  {
    result = action(v4->data, argument);
    if ( result )
      break;
    v4 = v4->next;
    if ( !v4 )
      return 0;
  }
  return result;
};
