int __fastcall check_nonce_hns(int a1, int a2)
{
  int v4; // [sp+Ch] [bp-1140h]
  _BYTE v7[52]; // [sp+18h] [bp-1134h] BYREF
  _BYTE s[32]; // [sp+1018h] [bp-134h] BYREF
  _DWORD dest[64]; // [sp+1038h] [bp-114h] BYREF
  unsigned __int8 v10; // [sp+113Bh] [bp-11h]
  int v11; // [sp+113Ch] [bp-10h]
  unsigned int v12; // [sp+1140h] [bp-Ch]
  int v13; // [sp+1144h] [bp-8h]

  v11 = a2;
  v13 = *(_DWORD *)(a1 + 864);
  v12 = *(_DWORD *)(v13 + 4 * (*(unsigned __int8 *)(a2 + 57) + 9472));
  memset(s, 255, sizeof(s));
  memset(dest, 0, sizeof(dest));
  memcpy(dest, (const void *)(v13 + ((*(unsigned __int8 *)(v11 + 57) + 20) << 8)), sizeof(dest));
  BYTE2(dest[62]) = *(_BYTE *)(v11 + 55);
  HIBYTE(dest[62]) = *(_BYTE *)(v11 + 54);
  dest[63] = *(_DWORD *)(v11 + 48);
  hns_hash((int)dest, s);
  v10 = target_to_diff_byte_hns((int)s);
  if ( v10 > 0x23u )
  {
    if ( v10 == *(unsigned __int8 *)(v11 + 56) || v12 <= v10 )
    {
      if ( v12 > v10 || (unsigned __int8)sub_160FFC((int)s, v13 + 32 * (*(unsigned __int8 *)(v11 + 57) + 1200)) != 1 )
      {
        V_LOCK();
        logfmt_raw(v7, 0x1000u, 0, "hw diff (%d<%d) not reach pool", *(unsigned __int8 *)(v11 + 56), v12);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
          171,
          "check_nonce_hns",
          15,
          704,
          20,
          v7);
        return 1;
      }
      else
      {
        return 0;
      }
    }
    else
    {
      V_LOCK();
      logfmt_raw(
        v7,
        0x1000u,
        0,
        "diff not match (%d!=%d) expected diff %d",
        v10,
        *(unsigned __int8 *)(v11 + 56),
        v12,
        v4,
        a2,
        a1);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
        171,
        "check_nonce_hns",
        15,
        673,
        20,
        v7);
      return 3;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(
      v7,
      0x1000u,
      0,
      "hw error calculate diff %d ans diff %d TICKET_MASK_HNS_2130 %d",
      v10,
      *(unsigned __int8 *)(v11 + 56),
      36,
      v4,
      a2,
      a1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_hns_2130/backend_hns_2130.c",
      171,
      "check_nonce_hns",
      15,
      668,
      20,
      v7);
    return 2;
  }
}
