bool __fastcall check_value_valid_with_stdd(double a1, int a2)
{
  double v2; // d0
  int *v4; // r3
  int v5; // r2
  int v6; // t1
  double v7; // d7
  double v8; // d10
  int v9; // r0
  double v10; // d8
  int v11; // r0
  _BYTE v13[4096]; // [sp+28h] [bp-1000h] BYREF

  if ( *(__int64 *)&a1 <= 0 )
  {
    v7 = 0.0;
  }
  else
  {
    v4 = (int *)LODWORD(a1);
    v5 = 0;
    do
    {
      v6 = *v4++;
      v5 += v6;
    }
    while ( (int *)(LODWORD(a1) + 4 * HIDWORD(a1)) != v4 );
    v7 = (double)v5;
  }
  v8 = v7 / (double)SHIDWORD(a1);
  v9 = calc_stdd(a1);
  V_LOCK(v9);
  v10 = (double)a2;
  v11 = logfmt_raw((int)v13, 0x1000u);
  V_UNLOCK(v11);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/util.c",
    137,
    "check_value_valid_with_stdd",
    27,
    559,
    20,
    v13);
  return v10 >= v8 - v2 && v10 <= v2 + v8 || v2 < 2.0;
}
