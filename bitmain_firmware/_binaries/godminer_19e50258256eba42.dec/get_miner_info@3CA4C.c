int __fastcall get_miner_info(int a1)
{
  int v1; // r0
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  _DWORD v8[2]; // [sp+Ch] [bp-18h] BYREF
  int v9; // [sp+14h] [bp-10h]
  int v10; // [sp+18h] [bp-Ch]
  int i; // [sp+1Ch] [bp-8h]

  v10 = 0;
  v9 = 12;
  v8[0] = 0;
  v8[1] = get_all_created_runtime(v8);
  for ( i = 0; i < v8[0]; ++i )
  {
    v1 = sprintf((char *)(a1 + v10), "chain%d_voltage=%d;", i + 1, v9);
    v10 += v1;
    v2 = sprintf((char *)(a1 + v10), "chain%d_voladded=%d;", i + 1, 0);
    v10 += v2;
    v3 = sprintf((char *)(a1 + v10), "chain%d_basefreq=%d;", i + 1, 0);
    v10 += v3;
    v4 = sprintf((char *)(a1 + v10), "chain%d_badcore=%d;", i + 1, 0);
    v10 += v4;
  }
  v5 = sprintf((char *)(a1 + v10), "chainnum=%d;", v8[0]);
  return sprintf((char *)(a1 + v10 + v5), "version=%s;", g_miner_compiletime);
}
