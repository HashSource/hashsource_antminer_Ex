int __fastcall check_nonce_hns(int a1, int a2)
{
  int v2; // r7
  int v4; // r4
  unsigned int v5; // r6
  char v6; // r2
  int v7; // r3
  unsigned int v8; // r0
  unsigned int v9; // r3
  unsigned __int8 *v10; // r3
  int v11; // r4
  int v12; // r2
  int v13; // r4
  unsigned int v14; // t1
  unsigned int v15; // t1
  bool v16; // cc
  int v18; // r0
  int v19; // r0
  int v20; // r0
  _BYTE s[32]; // [sp+10h] [bp-1124h] BYREF
  _DWORD dest[64]; // [sp+30h] [bp-1104h] BYREF
  _BYTE v23[4100]; // [sp+130h] [bp-1004h] BYREF

  v2 = *(unsigned __int8 *)(a2 + 57);
  v4 = *(_DWORD *)(a1 + 776);
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
    v20 = logfmt_raw((int)v23, 0x1000u);
    V_UNLOCK(v20);
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origin_"
      "godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
      170,
      "check_nonce_hns",
      15,
      570,
      20,
      v23);
    return 2;
  }
  else
  {
    v9 = *(unsigned __int8 *)(a2 + 56);
    if ( v9 == v8 )
    {
      if ( v5 > v9 )
      {
LABEL_9:
        V_LOCK(v8);
        v18 = logfmt_raw((int)v23, 0x1000u);
        V_UNLOCK(v18);
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-ori"
          "gin_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
          170,
          "check_nonce_hns",
          15,
          606,
          20,
          v23);
        return 1;
      }
      else
      {
        v10 = s;
        v11 = v4 + 32 * (*(unsigned __int8 *)(a2 + 57) + 1200);
        v12 = v11 - 1;
        v13 = v11 + 31;
        do
        {
          v14 = *v10++;
          v8 = v14;
          v15 = *(unsigned __int8 *)++v12;
          v16 = v8 > v15;
          if ( v8 < v15 )
            break;
          if ( v16 )
            goto LABEL_9;
        }
        while ( v12 != v13 );
        return 0;
      }
    }
    else
    {
      V_LOCK(v8);
      v19 = logfmt_raw((int)v23, 0x1000u);
      V_UNLOCK(v19);
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_debug/build/rootfs/buildroot/tmp/debug/build/godminer-origi"
        "n_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
        170,
        "check_nonce_hns",
        15,
        575,
        20,
        v23);
      return 3;
    }
  }
}
