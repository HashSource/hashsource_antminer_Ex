int __fastcall check_nonce_eth(int a1, int a2)
{
  _DWORD *v2; // r7
  int v3; // r5
  int v5; // t1
  int v6; // r1
  unsigned int v7; // r9
  unsigned int v8; // r5
  int v9; // r0
  int v10; // r0
  int v12; // r0
  int v13; // r0
  int v14; // [sp+10h] [bp+0h]
  int v15; // [sp+14h] [bp+4h]
  int v16; // [sp+18h] [bp+8h]
  int v17; // [sp+1Ch] [bp+Ch]
  int v18; // [sp+20h] [bp+10h]
  int v19; // [sp+24h] [bp+14h]
  int v20; // [sp+28h] [bp+18h]
  int v21; // [sp+2Ch] [bp+1Ch]
  int v22; // [sp+30h] [bp+20h]
  int v23; // [sp+34h] [bp+24h]
  int v24; // [sp+38h] [bp+28h]
  int v25; // [sp+3Ch] [bp+2Ch]
  int v26; // [sp+40h] [bp+30h]
  int v27; // [sp+44h] [bp+34h]
  int v28; // [sp+48h] [bp+38h]
  int v29; // [sp+4Ch] [bp+3Ch]
  int v30; // [sp+50h] [bp+40h]
  int v31; // [sp+54h] [bp+44h]
  _BYTE v32[32]; // [sp+58h] [bp+48h] BYREF
  _DWORD v33[1025]; // [sp+78h] [bp+68h] BYREF

  v3 = *(_DWORD *)(a1 + 632);
  v16 = *(_DWORD *)(a2 + 34);
  v17 = *(_DWORD *)(a2 + 38);
  v18 = *(_DWORD *)(a2 + 42);
  v19 = *(_DWORD *)(a2 + 46);
  v20 = *(_DWORD *)(a2 + 50);
  v21 = *(_DWORD *)(a2 + 54);
  v22 = *(_DWORD *)(a2 + 58);
  v23 = *(_DWORD *)(a2 + 62);
  v24 = *(_DWORD *)(a2 + 98);
  v25 = *(_DWORD *)(a2 + 102);
  v26 = *(_DWORD *)(a2 + 106);
  v27 = *(_DWORD *)(a2 + 110);
  v28 = *(_DWORD *)(a2 + 114);
  v29 = *(_DWORD *)(a2 + 118);
  v30 = *(_DWORD *)(a2 + 122);
  v31 = *(_DWORD *)(a2 + 126);
  v5 = *(_DWORD *)(a2 + 26);
  v6 = *(_DWORD *)(a2 + 30);
  *v2 = v5;
  v2[1] = v6;
  v33[0] = v16;
  v33[1] = v17;
  v33[2] = v18;
  v33[3] = v19;
  v33[4] = v20;
  v33[5] = v21;
  v33[6] = v22;
  v33[7] = v23;
  v33[8] = v14;
  v33[9] = v15;
  eth_sha3_512(v33, 64, v33, 40);
  v33[16] = v24;
  v33[17] = v25;
  v33[18] = v26;
  v33[19] = v27;
  v33[20] = v28;
  v33[21] = v29;
  v33[22] = v30;
  v33[23] = v31;
  eth_sha3_256(v32, 32, v33, 96);
  v7 = target_to_diff_eth(v32);
  v8 = *(unsigned __int8 *)(v3 + *(unsigned __int8 *)(a2 + 16) + 34816);
  V_LOCK(v7);
  v9 = logfmt_raw((int)v33, 0x1000u);
  V_UNLOCK(v9);
  v10 = zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_eth/backend_eth.c",
          154,
          "check_nonce_eth",
          15,
          12482,
          20,
          v33);
  if ( v7 <= 0x1C )
  {
    V_LOCK(v10);
    v13 = logfmt_raw((int)v33, 0x1000u);
    V_UNLOCK(v13);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "check_nonce_eth",
      15,
      12512,
      20,
      v33);
    return 2;
  }
  else if ( v7 < v8 )
  {
    V_LOCK(v10);
    v12 = logfmt_raw((int)v33, 0x1000u);
    V_UNLOCK(v12);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_eth/backend_eth.c",
      154,
      "check_nonce_eth",
      15,
      12517,
      20,
      v33);
    return 1;
  }
  else
  {
    return 0;
  }
}
