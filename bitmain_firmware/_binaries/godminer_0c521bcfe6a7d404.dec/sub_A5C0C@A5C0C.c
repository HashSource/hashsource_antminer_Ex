int __fastcall sub_A5C0C(int a1, int a2, int a3)
{
  int v3; // r4
  int v4; // r10
  char *v5; // r5
  int v6; // t1
  char *v7; // r0
  int v8; // r0
  char s[36]; // [sp+10h] [bp-1024h] BYREF

  if ( a3 )
  {
    v3 = a2 - 1;
    v4 = a2 - 1 + a3;
    v5 = s;
    do
    {
      v6 = *(unsigned __int8 *)++v3;
      v7 = v5;
      v5 += 2;
      a1 = sprintf(v7, "%02x", v6);
    }
    while ( v3 != v4 );
  }
  V_LOCK(a1);
  v8 = logfmt_raw((int)s, 0x1000u);
  V_UNLOCK(v8);
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godmine"
           "r-origin_godminer-new/backend/device/hal/drv_pic/mps2973.c",
           167,
           "hex_dump",
           8,
           37,
           20,
           s);
}
