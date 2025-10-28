int __fastcall check_nonce_hns(int a1, int a2)
{
  int v2; // r6
  int v4; // r3
  const void *v5; // r5
  unsigned int v6; // r7
  char v7; // r12
  int v8; // r3
  unsigned int v9; // r0
  unsigned int v10; // r3
  int v12; // r0
  int v13; // r0
  int v14; // r0
  _BYTE v15[32]; // [sp+10h] [bp-1124h] BYREF
  _DWORD dest[64]; // [sp+30h] [bp-1104h] BYREF
  _BYTE v17[4100]; // [sp+130h] [bp-1004h] BYREF

  v2 = *(_DWORD *)(a1 + 632);
  v4 = *(unsigned __int8 *)(a2 + 57);
  v5 = (const void *)(v2 + ((v4 + 20) << 8));
  v6 = *(_DWORD *)(v2 + 4 * (v4 + 9472));
  memcpy(dest, v5, sizeof(dest));
  v7 = *(_BYTE *)(a2 + 54);
  v8 = *(_DWORD *)(a2 + 48);
  BYTE2(dest[62]) = *(_BYTE *)(a2 + 55);
  HIBYTE(dest[62]) = v7;
  dest[63] = v8;
  sub_A5800("awork", (int)v5, 256);
  sub_A5800("pwork", (int)dest, 256);
  hns_hash(dest, v15);
  sub_A5800("target", v2 + 32 * (*(unsigned __int8 *)(a2 + 57) + 1200), 32);
  sub_A5800("vvhash", (int)v15, 32);
  v9 = target_to_diff_byte_hns(v15);
  if ( v9 <= 0x19 )
  {
    V_LOCK(v9);
    v14 = logfmt_raw((int)v17, 0x1000u);
    V_UNLOCK(v14);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_"
      "master/backend/backend_hns/backend_hns.c",
      154,
      "check_nonce_hns",
      15,
      365,
      20,
      v17);
    return 2;
  }
  else
  {
    v10 = *(unsigned __int8 *)(a2 + 56);
    if ( v10 == v9 )
    {
      if ( v6 > v10 )
      {
        V_LOCK(v9);
        v12 = logfmt_raw((int)v17, 0x1000u);
        V_UNLOCK(v12);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
          "gin_master/backend/backend_hns/backend_hns.c",
          154,
          "check_nonce_hns",
          15,
          375,
          20,
          v17);
        return 1;
      }
      else
      {
        return 0;
      }
    }
    else
    {
      V_LOCK(v9);
      v13 = logfmt_raw((int)v17, 0x1000u);
      V_UNLOCK(v13);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
        "n_master/backend/backend_hns/backend_hns.c",
        154,
        "check_nonce_hns",
        15,
        370,
        20,
        v17);
      return 3;
    }
  }
}
