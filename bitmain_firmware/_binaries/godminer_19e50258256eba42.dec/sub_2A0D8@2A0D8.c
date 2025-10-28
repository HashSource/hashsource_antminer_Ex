json_t *__fastcall sub_2A0D8(json_t *a1, _DWORD *a2)
{
  json_t *result; // r0
  _BYTE v4[12]; // [sp+Ch] [bp-18h] BYREF
  _DWORD *v5; // [sp+18h] [bp-Ch]
  int v6; // [sp+1Ch] [bp-8h]

  v5 = a2;
  result = (json_t *)get_miner_working_status((int)v4);
  v6 = 0;
  if ( a1 )
  {
    if ( v4[4] )
      v6 = -1;
    return sub_291C0(a1, v5, v6);
  }
  return result;
}
