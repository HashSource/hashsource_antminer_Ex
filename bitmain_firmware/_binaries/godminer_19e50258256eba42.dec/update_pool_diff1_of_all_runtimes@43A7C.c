int __fastcall update_pool_diff1_of_all_runtimes(int a1)
{
  __int64 v1; // r0
  int v4; // [sp+18h] [bp-34h] BYREF
  _DWORD *all_created_runtime; // [sp+1Ch] [bp-30h]
  int j; // [sp+20h] [bp-2Ch]
  int i; // [sp+24h] [bp-28h]
  __int64 v8; // [sp+28h] [bp-24h]

  v4 = 0;
  all_created_runtime = get_all_created_runtime(&v4);
  v8 = 0;
  for ( i = 0; i < v4; ++i )
  {
    for ( j = 0; j <= 2; ++j )
      v8 += *(_QWORD *)(all_created_runtime[i] + 8 * (j + 76));
  }
  total_diff1 += v8 - qword_5ACE80[*(_DWORD *)a1];
  v1 = qword_5ACE80[*(_DWORD *)a1];
  *(_QWORD *)(a1 + 1992) += v8 - v1;
  qword_5ACE80[*(_DWORD *)a1] = v8;
  return v1;
}
