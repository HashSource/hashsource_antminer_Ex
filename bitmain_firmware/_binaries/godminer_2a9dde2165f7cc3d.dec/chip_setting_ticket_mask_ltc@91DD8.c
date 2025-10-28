int __fastcall chip_setting_ticket_mask_ltc(int a1, unsigned int a2)
{
  int v4; // r0
  int v5; // r3
  int v6; // r3
  int v7; // r0
  int v8; // r9
  int i; // r2
  int v10; // r0
  int v12; // r4
  _DWORD v13[2]; // [sp+10h] [bp-1010h] BYREF
  int v14; // [sp+18h] [bp-1008h]
  int v15; // [sp+1Ch] [bp-1004h]
  _BYTE v16[4096]; // [sp+20h] [bp-1000h] BYREF

  v13[1] = 0;
  v14 = 0;
  v15 = 0;
  v13[0] = 0;
  V_LOCK(a1);
  v4 = logfmt_raw((int)v16, 0x1000u);
  V_UNLOCK(v4);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
    179,
    "chip_setting_ticket_mask_ltc",
    28,
    146,
    60,
    v16);
  v5 = *(_DWORD *)(a1 + 308);
  v14 = 131073;
  v13[0] = (unsigned __int16)a2;
  BYTE1(v15) = v5;
  BYTE2(v15) = 1;
  (*(void (__fastcall **)(int, _DWORD *))(a1 + 244))(a1, v13);
  usleep(0x3E8u);
  v6 = *(_DWORD *)(a1 + 308);
  v14 = 262145;
  BYTE2(v15) = 1;
  v13[0] = HIWORD(a2);
  BYTE1(v15) = v6;
  LOBYTE(v15) = 0;
  v7 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 244))(a1, v13);
  v8 = v7;
  if ( (a2 & 1) != 0 )
  {
    for ( i = 0; ; ++i )
    {
      a2 >>= 1;
      if ( (a2 & 1) == 0 )
        break;
    }
    v12 = i + 17;
  }
  else
  {
    v12 = 16;
  }
  *(_DWORD *)(a1 + 400) = v12;
  V_LOCK(v7);
  v10 = logfmt_raw((int)v16, 0x1000u);
  V_UNLOCK(v10);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_ltc_1489/chip_setting_ltc_1489.c",
    179,
    "chip_setting_ticket_mask_ltc",
    28,
    177,
    60,
    v16);
  return v8;
}
