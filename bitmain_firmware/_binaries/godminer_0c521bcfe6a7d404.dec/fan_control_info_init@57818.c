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
  dword_1716D8 = a1;
  dword_1716DC = a2;
  dword_1716E0 = a3;
  dword_1716E4 = a4;
  dword_1716E8 = a5;
  dword_1716EC = a6;
  flt_1716F0 = a7;
  dword_1716F4 = a8;
  dword_1716F8 = a9;
  dword_1716FC = a10;
  dword_171700 = a11;
  dword_171704 = a12;
  dword_171708 = a13;
  v13 = memset(&flt_174390, 0, 0x2Cu);
  if ( dword_1716D8 == 2 )
  {
    v13 = (void *)dword_1716FC;
    LODWORD(flt_1743A0) = dword_1716FC;
    flt_174398 = (float)SLODWORD(flt_1716F0);
    LODWORD(flt_1743A4) = dword_171700;
    LODWORD(flt_1743A8) = dword_171704;
    flt_174394 = (float)dword_1716DC;
    LODWORD(flt_1743AC) = dword_171708;
    flt_174390 = (float)dword_1716E0;
  }
  V_LOCK(v13);
  v14 = logfmt_raw((int)var1004, 0x1000u);
  V_UNLOCK(v14);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/miner_util/set_pwm_by_temp.c",
    159,
    "fan_control_info_init",
    21,
    344,
    40,
    var1004);
  return 0;
}
