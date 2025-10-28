int __fastcall check_nonce_kas(int a1, int a2)
{
  __int64 v4; // [sp+60h] [bp-12F4h]
  _QWORD v6[522]; // [sp+1A8h] [bp-11ACh] BYREF
  _BYTE v7[112]; // [sp+11F8h] [bp-15Ch] BYREF
  _DWORD v8[7]; // [sp+1268h] [bp-ECh] BYREF
  int v9; // [sp+1284h] [bp-D0h]
  _DWORD v10[7]; // [sp+1288h] [bp-CCh] BYREF
  int v11; // [sp+12A4h] [bp-B0h]
  _DWORD v12[7]; // [sp+12A8h] [bp-ACh] BYREF
  int v13; // [sp+12C4h] [bp-90h]
  _DWORD v14[7]; // [sp+12C8h] [bp-8Ch] BYREF
  int v15; // [sp+12E4h] [bp-70h]
  unsigned __int8 v16; // [sp+12EFh] [bp-65h]
  __int64 v17; // [sp+12F0h] [bp-64h]
  int i; // [sp+12FCh] [bp-58h]
  int v19; // [sp+1300h] [bp-54h]
  int v20; // [sp+1304h] [bp-50h]
  unsigned __int64 v21; // [sp+1308h] [bp-4Ch]
  unsigned __int64 v22; // [sp+1310h] [bp-44h]
  unsigned __int64 v23; // [sp+1318h] [bp-3Ch]
  unsigned __int64 v24; // [sp+1320h] [bp-34h]
  unsigned __int8 v25; // [sp+132Fh] [bp-25h]
  unsigned __int64 v26; // [sp+1330h] [bp-24h]

  v20 = a2;
  v19 = *(_DWORD *)(a1 + 864);
  v25 = *(_BYTE *)(v19 + *(unsigned __int8 *)(a2 + 16) + 0x2000);
  if ( *(unsigned __int8 *)(a2 + 17) > 0x23u )
  {
    v24 = _byteswap_uint64(*(_QWORD *)(v19 + 48 * *(unsigned __int8 *)(v20 + 16) + 2056));
    v23 = _byteswap_uint64(*(_QWORD *)(v19 + 48 * *(unsigned __int8 *)(v20 + 16) + 2064));
    v22 = _byteswap_uint64(*(_QWORD *)(v19 + 48 * *(unsigned __int8 *)(v20 + 16) + 2072));
    v21 = _byteswap_uint64(*(_QWORD *)(v19 + 48 * *(unsigned __int8 *)(v20 + 16) + 2080));
    v6[512] = v24;
    v6[513] = v23;
    v6[514] = v22;
    v6[515] = v21;
    v26 = _byteswap_uint64(*(_QWORD *)(v19 + 48 * *(unsigned __int8 *)(v20 + 16) + 2048));
    LODWORD(v4) = (*(unsigned __int8 *)(v20 + 30) << 24)
                | (*(unsigned __int8 *)(v20 + 31) << 16)
                | (*(unsigned __int8 *)(v20 + 32) << 8);
    HIDWORD(v4) = _byteswap_ulong(*(_DWORD *)(v20 + 26));
    v17 = v4 | *(unsigned __int8 *)(v20 + 33);
    for ( i = 0; i <= 31; ++i )
      v7[31 - i] = v7[i + 32];
    v16 = target_to_diff_kas((int)v7);
    if ( v16 > 0x23u )
    {
      if ( v16 < (unsigned int)v25
        || (unsigned __int8)sub_1711A4((int)v7, v19 + 32 * (*(unsigned __int8 *)(v20 + 16) + 260)) != 1 )
      {
        V_LOCK();
        sub_1622D8((int)v12, *(int *)(a1 + 272));
        logfmt_raw(
          v6,
          0x1000u,
          0,
          v13,
          v12[0],
          v12[1],
          v12[2],
          v12[3],
          v12[4],
          v12[5],
          v12[6],
          v13,
          "hw diff (%d<%d) not reach pool",
          v16,
          v25);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
          171,
          "check_nonce_kas",
          15,
          595,
          20,
          v6);
        return 1;
      }
      else
      {
        V_LOCK();
        sub_1622D8((int)v14, *(int *)(a1 + 272));
        logfmt_raw(
          v6,
          0x1000u,
          0,
          v15,
          v14[0],
          v14[1],
          v14[2],
          v14[3],
          v14[4],
          v14[5],
          v14[6],
          v15,
          "Verification passed! diff %d expected_diff %d ",
          v16,
          v25);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
          171,
          "check_nonce_kas",
          15,
          598,
          20,
          v6);
        return 0;
      }
    }
    else
    {
      V_LOCK();
      sub_1622D8((int)v10, *(int *)(a1 + 272));
      logfmt_raw(
        v6,
        0x1000u,
        0,
        v11,
        v10[0],
        v10[1],
        v10[2],
        v10[3],
        v10[4],
        v10[5],
        v10[6],
        v11,
        "hw error calculate diff %d ans diff %d TICKET_MASK_KAS_2380 %d",
        v16,
        *(unsigned __int8 *)(v20 + 17),
        36);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
        171,
        "check_nonce_kas",
        15,
        575,
        20,
        v6);
      return 2;
    }
  }
  else
  {
    V_LOCK();
    sub_1622D8((int)v8, *(int *)(a1 + 272));
    logfmt_raw(
      v6,
      0x1000u,
      0,
      v9,
      v8[0],
      v8[1],
      v8[2],
      v8[3],
      v8[4],
      v8[5],
      v8[6],
      v9,
      "ans diff %d TICKET_MASK_KAS_2380 %d",
      *(unsigned __int8 *)(v20 + 17),
      36);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
      171,
      "check_nonce_kas",
      15,
      529,
      20,
      v6);
    return 2;
  }
}
