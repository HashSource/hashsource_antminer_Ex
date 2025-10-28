int __fastcall set_core_reg(int a1, char a2, __int16 a3, int a4)
{
  int v8; // r0
  _DWORD v10[2]; // [sp+10h] [bp-1014h] BYREF
  __int16 v11; // [sp+18h] [bp-100Ch]
  __int16 v12; // [sp+1Ah] [bp-100Ah]
  char v13; // [sp+1Ch] [bp-1008h]
  char v14; // [sp+1Dh] [bp-1007h]
  __int16 v15; // [sp+1Eh] [bp-1006h]
  _BYTE v16[4100]; // [sp+20h] [bp-1004h] BYREF

  v10[1] = 0;
  v15 = 0;
  V_LOCK(a1);
  v8 = logfmt_raw((int)v16, 0x1000u);
  V_UNLOCK(v8);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_go"
    "dminer-new/backend/backend_dash_1766/backend_dash_1766.c",
    172,
    "set_core_reg",
    0xCu,
    343,
    20,
    v16);
  v13 = a2;
  v11 = 1;
  v12 = a3;
  v10[0] = a4;
  v14 = 0xCu;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 232))(a1, v10);
}
