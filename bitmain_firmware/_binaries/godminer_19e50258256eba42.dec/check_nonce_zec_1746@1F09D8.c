int __fastcall check_nonce_zec_1746(int a1, int a2)
{
  _BYTE v6[52]; // [sp+38h] [bp-1834h] BYREF
  _BYTE v7[20]; // [sp+1038h] [bp-834h] BYREF
  _BYTE v8[12]; // [sp+11A0h] [bp-6CCh] BYREF
  _BYTE v9[12]; // [sp+11C0h] [bp-6ACh] BYREF
  _DWORD v10[372]; // [sp+11E0h] [bp-68Ch] BYREF
  _DWORD v11[7]; // [sp+17B0h] [bp-BCh] BYREF
  int v12; // [sp+17CCh] [bp-A0h]
  _DWORD v13[7]; // [sp+17D0h] [bp-9Ch] BYREF
  int v14; // [sp+17ECh] [bp-80h]
  _DWORD v15[7]; // [sp+17F0h] [bp-7Ch] BYREF
  int v16; // [sp+180Ch] [bp-60h]
  _DWORD v17[7]; // [sp+1810h] [bp-5Ch] BYREF
  int v18; // [sp+182Ch] [bp-40h]
  _DWORD v19[7]; // [sp+1830h] [bp-3Ch] BYREF
  int v20; // [sp+184Ch] [bp-20h]
  int v21; // [sp+1850h] [bp-1Ch]
  unsigned int v22; // [sp+1854h] [bp-18h]
  int v23; // [sp+1858h] [bp-14h]
  unsigned __int8 v24; // [sp+185Fh] [bp-Dh]

  v21 = a2;
  v23 = *(_DWORD *)(a1 + 864);
  v22 = *(_DWORD *)(v23 + 4 * (*(unsigned __int8 *)(a2 + 53) + 5760));
  memset(v10, 0, 0x5CFu);
  memcpy(v10, (const void *)(v23 + 140 * *(unsigned __int8 *)(v21 + 53) + 5120), 0x8Cu);
  v10[34] = *(_DWORD *)(v21 + 48);
  sub_1F08DC(&v10[35], 0x540u);
  memcpy((char *)&v10[35] + 3, (const void *)(v21 + 54), 0x540u);
  digestInit(v7, 0xC8u, 9);
  equihash_blake2b_update((int)v7, (char *)v10, 0x8Cu);
  Sha256_Onestep(v10, 1487, v8);
  Sha256_Onestep(v8, 32, v9);
  reverse_hex((int)v9, 0x20u);
  v24 = target_to_diff_zec((int)v9);
  if ( v24 == *(unsigned __int8 *)(v21 + 52) )
  {
    if ( v24 > 0x11u )
    {
      if ( IsValidSolution(v7, v21 + 54) )
      {
        V_LOCK();
        sub_1E0BC0((int)v15, *(int *)(a1 + 272));
        logfmt_raw(
          v6,
          0x1000u,
          0,
          v16,
          v15[0],
          v15[1],
          v15[2],
          v15[3],
          v15[4],
          v15[5],
          v15[6],
          v16,
          "hw error, type %d, solution verify failed",
          2);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
          171,
          "check_nonce_zec_1746",
          20,
          899,
          20,
          v6);
        return 2;
      }
      else if ( v22 > v24
             || (unsigned __int8)sub_1F07F4((int)v9, v23 + 32 * (*(unsigned __int8 *)(v21 + 53) + 736)) != 1 )
      {
        V_LOCK();
        sub_1E0BC0((int)v17, *(int *)(a1 + 272));
        logfmt_raw(
          v6,
          0x1000u,
          0,
          v18,
          v17[0],
          v17[1],
          v17[2],
          v17[3],
          v17[4],
          v17[5],
          v17[6],
          v18,
          "hw error, type %d, this diff(%d) not reach pool(%d)",
          1,
          v24,
          v22,
          a2);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
          171,
          "check_nonce_zec_1746",
          20,
          927,
          20,
          v6);
        return 1;
      }
      else
      {
        memcpy((void *)(v21 + 1398), v10, 0x5CFu);
        V_LOCK();
        sub_1E0BC0((int)v19, *(int *)(a1 + 272));
        logfmt_raw(v6, 0x1000u, 0, v20, v19[0], v19[1], v19[2], v19[3], v19[4], v19[5], v19[6], v20, "hw no error");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
          171,
          "check_nonce_zec_1746",
          20,
          932,
          20,
          v6);
        return 0;
      }
    }
    else
    {
      V_LOCK();
      sub_1E0BC0((int)v13, *(int *)(a1 + 272));
      logfmt_raw(
        v6,
        0x1000u,
        0,
        v14,
        v13[0],
        v13[1],
        v13[2],
        v13[3],
        v13[4],
        v13[5],
        v13[6],
        v14,
        "hw error, type %d, diff %d, ticket mask %d",
        2,
        v24,
        18,
        a2);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
        171,
        "check_nonce_zec_1746",
        20,
        892,
        20,
        v6);
      return 2;
    }
  }
  else
  {
    V_LOCK();
    sub_1E0BC0((int)v11, *(int *)(a1 + 272));
    logfmt_raw(
      v6,
      0x1000u,
      0,
      v12,
      v11[0],
      v11[1],
      v11[2],
      v11[3],
      v11[4],
      v11[5],
      v11[6],
      v12,
      "hw error, type %d, calculate diff %d, chip return diff %d,",
      3,
      v24,
      *(unsigned __int8 *)(v21 + 52),
      a2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_zec_1746/backend_zec_1746.c",
      171,
      "check_nonce_zec_1746",
      20,
      886,
      20,
      v6);
    return 3;
  }
}
