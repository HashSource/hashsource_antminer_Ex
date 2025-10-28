int __fastcall sweep_chip_setting_freq_ltc(int a1, int a2, int a3)
{
  float v3; // s0
  char v5; // r3
  int v6; // r4
  int v8; // r0
  _DWORD v9[2]; // [sp+10h] [bp-1010h] BYREF
  int v10; // [sp+18h] [bp-1008h]
  int v11; // [sp+1Ch] [bp-1004h]
  _BYTE v12[4096]; // [sp+20h] [bp-1000h] BYREF

  v9[1] = 0;
  v10 = (unsigned __int8)a2;
  v11 = 0;
  v9[0] = 0;
  if ( a2 )
  {
    HIWORD(v10) = 8;
    v9[0] = ((unsigned int)(float)((float)(v3 + v3) / 25.0) << 16) & 0xFFF0000 | 0xA0000211;
    V_LOCK(a1);
    v8 = logfmt_raw((int)v12, 0x1000u);
    V_UNLOCK(v8);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_ltc/chip_setting_ltc.c",
      159,
      "sweep_chip_setting_freq_ltc",
      27,
      176,
      60,
      v12);
  }
  else
  {
    v5 = *(_BYTE *)(*(_DWORD *)(a1 + 304) + a3);
    HIWORD(v10) = 8;
    BYTE1(v10) = v5;
    v9[0] = ((unsigned int)(float)((float)(v3 + v3) / 25.0) << 16) & 0xFFF0000 | 0xA0000211;
  }
  v6 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 164))(a1, v9);
  usleep(0x2710u);
  return v6;
}
