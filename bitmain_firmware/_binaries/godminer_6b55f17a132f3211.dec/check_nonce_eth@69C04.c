int __fastcall check_nonce_eth(int a1, int a2)
{
  int v2; // r5
  unsigned int v4; // r10
  unsigned int v5; // r5
  int v6; // r0
  int v7; // r0
  int v9; // r0
  int v10; // r0
  int v11; // [sp+10h] [bp+0h]
  int v12; // [sp+14h] [bp+4h]
  int v13; // [sp+1Ch] [bp+Ch]
  int v14; // [sp+20h] [bp+10h]
  int v15; // [sp+24h] [bp+14h]
  int v16; // [sp+28h] [bp+18h]
  int v17; // [sp+2Ch] [bp+1Ch]
  int v18; // [sp+30h] [bp+20h]
  int v19; // [sp+34h] [bp+24h]
  int v20; // [sp+38h] [bp+28h]
  int v21; // [sp+3Ch] [bp+2Ch]
  int v22; // [sp+40h] [bp+30h]
  int v23; // [sp+44h] [bp+34h]
  int v24; // [sp+48h] [bp+38h]
  int v25; // [sp+4Ch] [bp+3Ch]
  int v26; // [sp+50h] [bp+40h]
  int v27; // [sp+54h] [bp+44h]
  _BYTE v28[32]; // [sp+58h] [bp+48h] BYREF
  _DWORD v29[1025]; // [sp+78h] [bp+68h] BYREF

  v2 = *(_DWORD *)(a1 + 776);
  v13 = *(_DWORD *)(a2 + 38);
  v14 = *(_DWORD *)(a2 + 42);
  v15 = *(_DWORD *)(a2 + 46);
  v16 = *(_DWORD *)(a2 + 50);
  v17 = *(_DWORD *)(a2 + 54);
  v18 = *(_DWORD *)(a2 + 58);
  v19 = *(_DWORD *)(a2 + 62);
  v20 = *(_DWORD *)(a2 + 98);
  v21 = *(_DWORD *)(a2 + 102);
  v22 = *(_DWORD *)(a2 + 106);
  v23 = *(_DWORD *)(a2 + 110);
  v24 = *(_DWORD *)(a2 + 114);
  v25 = *(_DWORD *)(a2 + 118);
  v26 = *(_DWORD *)(a2 + 122);
  v27 = *(_DWORD *)(a2 + 126);
  v11 = *(_DWORD *)(a2 + 26);
  v12 = *(_DWORD *)(a2 + 30);
  v29[0] = *(_DWORD *)(a2 + 34);
  v29[1] = v13;
  v29[2] = v14;
  v29[3] = v15;
  v29[4] = v16;
  v29[5] = v17;
  v29[6] = v18;
  v29[7] = v19;
  v29[8] = v11;
  v29[9] = v12;
  eth_sha3_512(v29, 64, v29, 40);
  v29[16] = v20;
  v29[17] = v21;
  v29[18] = v22;
  v29[19] = v23;
  v29[20] = v24;
  v29[21] = v25;
  v29[22] = v26;
  v29[23] = v27;
  eth_sha3_256(v28, 32, v29);
  v4 = target_to_diff_eth((int)v28);
  v5 = *(unsigned __int8 *)(v2 + *(unsigned __int8 *)(a2 + 16) + 34816);
  V_LOCK(v4);
  v6 = logfmt_raw((int)v29, 0x1000u);
  V_UNLOCK(v6);
  v7 = zlog(
         g_zc,
         "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-orig"
         "in_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
         170,
         "check_nonce_eth",
         15,
         1151,
         20,
         v29);
  if ( v4 <= 0x1F )
  {
    V_LOCK(v7);
    v10 = logfmt_raw((int)v29, 0x1000u);
    V_UNLOCK(v10);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
      170,
      "check_nonce_eth",
      15,
      1189,
      20,
      v29);
    return 2;
  }
  else if ( v4 < v5 )
  {
    V_LOCK(v7);
    v9 = logfmt_raw((int)v29, 0x1000u);
    V_UNLOCK(v9);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
      170,
      "check_nonce_eth",
      15,
      1195,
      20,
      v29);
    return 1;
  }
  else
  {
    return 0;
  }
}
