int __fastcall pwm_get(int a1, int a2)
{
  int v2; // r4
  int v4; // r3
  int v5; // r0
  int v6; // r0
  int v7; // r12
  int v8; // r2
  int v9; // r0
  int v10; // r1
  int v12; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  _BYTE v14[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( a1 > 2 )
  {
    v2 = -3;
    strcpy(s, "bad param");
    V_LOCK(*(_DWORD *)"bad param");
    v12 = logfmt_raw((int)v14, 0x1000u);
    V_UNLOCK(v12);
    v7 = 100;
    v8 = 101;
    v9 = g_zc;
    LOWORD(v10) = 18368;
  }
  else
  {
    v2 = a1 - 1;
    if ( a1 != 1 )
      return -5;
    fpga_read(132, (_DWORD *)a2);
    v4 = *(unsigned __int16 *)(a2 + 2);
    *(_DWORD *)a2 = v4;
    v5 = snprintf(s, 0x800u, "duty of fpga = 0x%x", v4);
    V_LOCK(v5);
    v6 = logfmt_raw((int)v14, 0x1000u);
    V_UNLOCK(v6);
    v7 = 20;
    v8 = 109;
    v9 = g_zc;
    LOWORD(v10) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/"
                                    "tmp/release/build/godminer-origin_godminer-new/backend/device/hal/platform/7020/7020_pwm.c";
  }
  HIWORD(v10) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/re"
                              "lease/build/godminer-origin_godminer-new/backend/device/hal/platform/7020/7020_pwm.c" >> 16;
  zlog(v9, v10, 174, "pwm_get", 7, v8, v7, v14);
  return v2;
}
