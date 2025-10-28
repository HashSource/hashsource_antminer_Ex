int __fastcall check_nonce_rvn(int a1, int a2)
{
  _DWORD *v2; // lr
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r1
  int v14; // r2
  int v15; // r3
  _BYTE v19[12]; // [sp+18h] [bp-108Ch] BYREF
  _BYTE v20[32]; // [sp+1018h] [bp-8Ch] BYREF
  _BYTE v21[32]; // [sp+1038h] [bp-6Ch] BYREF
  _DWORD v22[8]; // [sp+1058h] [bp-4Ch] BYREF
  _DWORD v23[8]; // [sp+1078h] [bp-2Ch] BYREF
  int v24; // [sp+1098h] [bp-Ch]
  int v25; // [sp+109Ch] [bp-8h]

  v24 = a2;
  v25 = *(_DWORD *)(a1 + 864);
  v2 = (_DWORD *)(a2 + 34);
  v3 = *(_DWORD *)(a2 + 34);
  v4 = *(_DWORD *)(a2 + 38);
  v5 = v2[2];
  v6 = v2[3];
  v23[0] = v3;
  v23[1] = v4;
  v23[2] = v5;
  v23[3] = v6;
  v7 = v2[5];
  v8 = v2[6];
  v9 = v2[7];
  v23[4] = v2[4];
  v23[5] = v7;
  v23[6] = v8;
  v23[7] = v9;
  v10 = *(_DWORD *)(v24 + 102);
  v11 = *(_DWORD *)(v24 + 106);
  v12 = *(_DWORD *)(v24 + 110);
  v22[0] = *(_DWORD *)(v24 + 98);
  v22[1] = v10;
  v22[2] = v11;
  v22[3] = v12;
  v13 = *(_DWORD *)(v24 + 118);
  v14 = *(_DWORD *)(v24 + 122);
  v15 = *(_DWORD *)(v24 + 126);
  v22[4] = *(_DWORD *)(v24 + 114);
  v22[5] = v13;
  v22[6] = v14;
  v22[7] = v15;
  ethash_get_expected_difficulty(v21, *(_DWORD *)(a1 + 472));
  ethash_get_expected_difficulty(v20, 9u);
  if ( !ethash_quick_check_difficulty(v23, *(_QWORD *)(v24 + 26), v22, (int)v20) )
  {
    V_LOCK();
    logfmt_raw(v19, 0x1000u, 0, "HW Error");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
      171,
      "check_nonce_rvn",
      15,
      1838,
      40,
      v19);
    return 2;
  }
  else if ( !ethash_quick_check_difficulty(v23, *(_QWORD *)(v24 + 26), v22, (int)v21) )
  {
    V_LOCK();
    logfmt_raw(v19, 0x1000u, 0, "SW Error");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_2044.c",
      171,
      "check_nonce_rvn",
      15,
      1843,
      40,
      v19);
    return 1;
  }
  else
  {
    return 0;
  }
}
