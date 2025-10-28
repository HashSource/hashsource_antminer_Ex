int __fastcall check_nonce_hns(int a1, int a2)
{
  int v2; // r7
  int v4; // r4
  unsigned int v5; // r5
  char v6; // r2
  int v7; // r3
  unsigned int v8; // r0
  unsigned int v9; // r3
  unsigned __int8 *v10; // r3
  int v11; // r1
  int v12; // r2
  int v13; // r1
  unsigned int v14; // r12
  unsigned int v15; // t1
  unsigned int v16; // t1
  bool v17; // cc
  int v19; // r0
  int v20; // r0
  int v21; // r0
  _BYTE s[32]; // [sp+10h] [bp-1124h] BYREF
  _DWORD dest[64]; // [sp+30h] [bp-1104h] BYREF
  _BYTE v24[4100]; // [sp+130h] [bp-1004h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 57);
  v4 = *(_DWORD *)(a1 + 784);
  v5 = *(_DWORD *)(v4 + 4 * (v2 + 9472));
  memset(s, 255, sizeof(s));
  memcpy(dest, (const void *)(v4 + ((v2 + 20) << 8)), sizeof(dest));
  v6 = *(_BYTE *)(a2 + 54);
  v7 = *(_DWORD *)(a2 + 48);
  BYTE2(dest[62]) = *(_BYTE *)(a2 + 55);
  HIBYTE(dest[62]) = v6;
  dest[63] = v7;
  hns_hash(dest, s);
  v8 = target_to_diff_byte_hns((int)s);
  if ( v8 <= 0x23 )
  {
    V_LOCK(v8);
    v21 = logfmt_raw((int)v24, 0x1000u);
    V_UNLOCK(v21);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-ori"
      "gin_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
      174,
      "check_nonce_hns",
      15,
      675,
      20,
      v24);
    return 2;
  }
  else
  {
    v9 = *(unsigned __int8 *)(a2 + 56);
    if ( v9 == v8 )
    {
      if ( v5 > v9 )
      {
LABEL_11:
        V_LOCK(v8);
        v19 = logfmt_raw((int)v24, 0x1000u);
        V_UNLOCK(v19);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer"
          "-origin_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
          174,
          "check_nonce_hns",
          15,
          711,
          20,
          v24);
        return 1;
      }
    }
    else if ( v5 > v8 )
    {
      V_LOCK(v8);
      v20 = logfmt_raw((int)v24, 0x1000u);
      V_UNLOCK(v20);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
        "rigin_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
        174,
        "check_nonce_hns",
        15,
        680,
        20,
        v24);
      return 3;
    }
    v10 = s;
    v11 = v4 + 32 * (*(unsigned __int8 *)(a2 + 57) + 1200);
    v12 = v11 - 1;
    v13 = v11 + 31;
    do
    {
      v15 = *v10++;
      v14 = v15;
      v16 = *(unsigned __int8 *)++v12;
      v8 = v16;
      v17 = v14 > v16;
      if ( v14 < v16 )
        break;
      if ( v17 )
        goto LABEL_11;
    }
    while ( v12 != v13 );
    return 0;
  }
}
