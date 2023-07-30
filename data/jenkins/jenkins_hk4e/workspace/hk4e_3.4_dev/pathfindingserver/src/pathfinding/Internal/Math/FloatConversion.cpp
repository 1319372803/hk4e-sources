// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/pathfindingserver/src/pathfinding/Internal/Math/FloatConversion.cpp

// Line 10: range 000000000CBF94FA-000000000CBF97C7
void __cdecl FloatToHalfConverter::InitializePrecomputeTables()
{
  char v0; // dl
  int v1; // edi
  char v2; // dl
  __int16 v3; // cx
  char v4; // dl
  char v5; // dl
  char v6; // dl
  char v7; // cl
  char v8; // dl
  int i; // [rsp+4h] [rbp-Ch]
  char mantissaShift; // [rsp+8h] [rbp-8h]
  int e; // [rsp+Ch] [rbp-4h]

  for ( i = 0; i <= 255; ++i )
  {
    e = i - 127;
    if ( i - 127 >= -25 )
    {
      if ( e >= -14 )
      {
        if ( e > 15 )
        {
          if ( e > 127 )
          {
            v6 = *(_BYTE *)(((unsigned __int64)&FloatToHalfConverter::m_ExponentTable[i] >> 3) + 0x7FFF8000);
            if ( v6 != 0 && (char)(((unsigned __int8)&FloatToHalfConverter::m_ExponentTable[i] & 7) + 3) >= v6 )
              __asan_report_store4(&FloatToHalfConverter::m_ExponentTable[i]);
            *(_WORD *)&FloatToHalfConverter::m_ExponentTable[i] = -2048;
            mantissaShift = 13;
          }
          else
          {
            v5 = *(_BYTE *)(((unsigned __int64)&FloatToHalfConverter::m_ExponentTable[i] >> 3) + 0x7FFF8000);
            if ( v5 != 0 && (char)(((unsigned __int8)&FloatToHalfConverter::m_ExponentTable[i] & 7) + 3) >= v5 )
              __asan_report_store4(&FloatToHalfConverter::m_ExponentTable[i]);
            *(_WORD *)&FloatToHalfConverter::m_ExponentTable[i] = -2048;
            mantissaShift = 25;
          }
        }
        else
        {
          v3 = ((_WORD)e + 15) << 11;
          v4 = *(_BYTE *)(((unsigned __int64)&FloatToHalfConverter::m_ExponentTable[i] >> 3) + 0x7FFF8000);
          if ( v4 != 0 && (char)(((unsigned __int8)&FloatToHalfConverter::m_ExponentTable[i] & 7) + 3) >= v4 )
            __asan_report_store4(&FloatToHalfConverter::m_ExponentTable[i]);
          *(_WORD *)&FloatToHalfConverter::m_ExponentTable[i] = v3;
          mantissaShift = 13;
        }
      }
      else
      {
        v1 = 1024 >> (-15 - e);
        v2 = *(_BYTE *)(((unsigned __int64)&FloatToHalfConverter::m_ExponentTable[i] >> 3) + 0x7FFF8000);
        if ( v2 != 0 && (char)(((unsigned __int8)&FloatToHalfConverter::m_ExponentTable[i] & 7) + 3) >= v2 )
        {
          LOWORD(v1) = (unsigned __int16)&FloatToHalfConverter::m_ExponentTable[i];
          __asan_report_store4(&FloatToHalfConverter::m_ExponentTable[i]);
        }
        *(_WORD *)&FloatToHalfConverter::m_ExponentTable[i] = v1;
        mantissaShift = ~(_BYTE)e;
      }
    }
    else
    {
      v0 = *(_BYTE *)(((unsigned __int64)&FloatToHalfConverter::m_ExponentTable[i] >> 3) + 0x7FFF8000);
      if ( v0 != 0 && (char)(((unsigned __int8)&FloatToHalfConverter::m_ExponentTable[i] & 7) + 3) >= v0 )
        __asan_report_store4(&FloatToHalfConverter::m_ExponentTable[i]);
      *(_WORD *)&FloatToHalfConverter::m_ExponentTable[i] = 0;
      mantissaShift = 25;
    }
    v7 = mantissaShift - 1;
    v8 = *(_BYTE *)(((unsigned __int64)&FloatToHalfConverter::m_ExponentTable[i] >> 3) + 0x7FFF8000);
    if ( v8 != 0 && (char)(((unsigned __int8)&FloatToHalfConverter::m_ExponentTable[i] & 7) + 3) >= v8 )
      __asan_report_store4(&FloatToHalfConverter::m_ExponentTable[i]);
    *((_BYTE *)&FloatToHalfConverter::m_ExponentTable[i] + 2) = v7;
  }
};

// Line 57: range 000000000CBF97C8-000000000CBF97DB
void __cdecl InitializeHalfConversionTables(void *a1)
{
  FloatToHalfConverter::InitializePrecomputeTables();
};
