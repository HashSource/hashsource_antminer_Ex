int __fastcall fan_control_info_init(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        float a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  void *v13; // r0
  int v14; // r0
  _BYTE var1004[4104]; // [sp+38h] [bp-1004h] BYREF
  int varg_r0; // [sp+1048h] [bp+Ch]
  int varg_r1; // [sp+104Ch] [bp+10h]
  int varg_r2; // [sp+1050h] [bp+14h]
  int varg_r3; // [sp+1054h] [bp+18h]

  varg_r0 = a1;
  varg_r1 = a2;
  varg_r2 = a3;
  varg_r3 = a4;
  dword_163464 = a1;
  dword_163468 = a2;
  dword_16346C = a3;
  dword_163470 = a4;
  dword_163474 = a5;
  dword_163478 = a6;
  flt_16347C = a7;
  dword_163480 = a8;
  dword_163484 = a9;
  dword_163488 = a10;
  dword_16348C = a11;
  dword_163490 = a12;
  dword_163494 = a13;
  v13 = memset(&flt_166078, 0, 0x2Cu);
  if ( dword_163464 == 2 )
  {
    v13 = (void *)dword_163488;
    LODWORD(flt_166088) = dword_163488;
    flt_166080 = (float)SLODWORD(flt_16347C);
    LODWORD(flt_16608C) = dword_16348C;
    LODWORD(flt_166090) = dword_163490;
    flt_16607C = (float)dword_163468;
    LODWORD(flt_166094) = dword_163494;
    flt_166078 = (float)dword_16346C;
  }
  V_LOCK(v13);
  v14 = logfmt_raw((int)var1004, 0x1000u);
  V_UNLOCK(v14);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/miner_util/set_pwm_by_temp.c",
    155,
    "fan_control_info_init",
    21,
    344,
    40,
    var1004);
  return 0;
}
