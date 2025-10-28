_DWORD *__fastcall hs_header_init(_DWORD *result)
{
  _DWORD *v1; // [sp+4h] [bp-8h]

  v1 = result;
  if ( result )
  {
    *result = 0;
    *((_QWORD *)result + 1) = 0;
    memset(result + 4, 0, 0x14u);
    memset(v1 + 9, 0, 0x20u);
    memset(v1 + 17, 0, 0x20u);
    memset(v1 + 25, 0, 0x20u);
    memset(v1 + 33, 0, 0x18u);
    memset(v1 + 39, 0, 0x20u);
    memset(v1 + 47, 0, 0x20u);
    result = memset(v1 + 55, 0, 0x20u);
    v1[63] = 0;
    v1[64] = 0;
  }
  return result;
}
