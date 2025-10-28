int __fastcall get_chain_isl_voltage(unsigned __int8 a1, int a2, int a3)
{
  char *v3; // r9
  int v4; // r5
  char v5; // r6
  int v6; // r0
  int v7; // r0
  char v8; // t1
  int v10; // [sp+10h] [bp-1038h]
  __int16 v12; // [sp+1Eh] [bp-102Ah] BYREF
  _BYTE v13[4136]; // [sp+20h] [bp-1028h] BYREF

  if ( a3 <= 2 )
    return 0;
  v3 = "QT";
  v4 = a2 - 2;
  v5 = 80;
  v10 = a2 + 4;
  while ( 1 )
  {
    v12 = 0;
    v6 = sub_BB140(a1, v5, &v12);
    *(_WORD *)(v4 + 2) = v12;
    v4 += 2;
    V_LOCK(v6);
    v7 = logfmt_raw((int)v13, 0x1000u);
    V_UNLOCK(v7);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/device/hal/drv_pic/isl68127.c",
      168,
      "get_chain_isl_voltage",
      21,
      202,
      60,
      v13);
    if ( v4 == v10 )
      break;
    v8 = *v3++;
    v5 = v8;
  }
  return 1;
}
