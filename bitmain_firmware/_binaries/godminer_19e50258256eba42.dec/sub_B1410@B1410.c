int sub_B1410()
{
  _BYTE src[216]; // [sp+0h] [bp-1DCh] BYREF
  _DWORD dest[55]; // [sp+D8h] [bp-104h] BYREF
  int v3; // [sp+1B4h] [bp-28h] BYREF
  int *all_created_runtime; // [sp+1B8h] [bp-24h]
  int v5; // [sp+1BCh] [bp-20h]
  int v6; // [sp+1C0h] [bp-1Ch]
  int k; // [sp+1C4h] [bp-18h]
  int j; // [sp+1C8h] [bp-14h]
  int i; // [sp+1CCh] [bp-10h]
  unsigned int v10; // [sp+1D0h] [bp-Ch]
  int v11; // [sp+1D4h] [bp-8h]

  v3 = 0;
  v6 = 0x7FFFFFFF;
  v11 = 0;
  v5 = 0;
  v10 = 0;
  all_created_runtime = (int *)get_all_created_runtime(&v3);
  if ( v3 > 0 )
  {
    read_status_from_monitor(dest, *all_created_runtime);
    for ( i = 0; i < v3; ++i )
    {
      read_status_from_monitor(src, all_created_runtime[i]);
      memcpy(dest, src, 0xD8u);
      for ( j = 0; j < dest[6]; ++j )
      {
        v11 += *(_DWORD *)(dest[1] + 4 * j);
        ++v10;
      }
      for ( k = 0; k < dest[7]; ++k )
      {
        v11 += *(_DWORD *)(dest[3] + 4 * k);
        ++v10;
      }
    }
  }
  return sub_344EB8(v11, v10);
}
