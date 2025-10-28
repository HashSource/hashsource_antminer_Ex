_BYTE *sub_B8EC4()
{
  _BYTE *result; // r0
  _BYTE v1[40]; // [sp+8h] [bp-F4h] BYREF
  float v2; // [sp+30h] [bp-CCh]
  double v3; // [sp+38h] [bp-C4h]
  _BYTE v4[12]; // [sp+E0h] [bp-1Ch] BYREF
  int v5; // [sp+ECh] [bp-10h] BYREF
  _DWORD *all_created_runtime; // [sp+F0h] [bp-Ch]
  int i; // [sp+F4h] [bp-8h]

  v5 = 0;
  all_created_runtime = get_all_created_runtime(&v5);
  result = (_BYTE *)get_miner_working_status((int)v4);
  if ( v4[8] != 1 )
  {
    for ( i = 0; i < v5; ++i )
    {
      result = v1;
      read_status_from_monitor(v1, all_created_runtime[i]);
      if ( v2 < v3 * 0.8 )
      {
        result = (_BYTE *)strcmp((const char *)(all_created_runtime[i] + 356), "ltc");
        if ( !result )
          result = (_BYTE *)(*(int (__fastcall **)(_DWORD))(all_created_runtime[i] + 28))(all_created_runtime[i]);
      }
    }
  }
  return result;
}
