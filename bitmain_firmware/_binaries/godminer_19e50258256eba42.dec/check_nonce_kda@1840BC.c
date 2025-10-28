int __fastcall check_nonce_kda(int a1, unsigned __int8 *a2)
{
  int v4; // [sp+Ch] [bp-1268h]
  _BYTE v7[28]; // [sp+18h] [bp-125Ch] BYREF
  _BYTE v8[185]; // [sp+1057h] [bp-21Dh] BYREF
  char v9[12]; // [sp+1110h] [bp-164h] BYREF
  _DWORD v10[8]; // [sp+111Ch] [bp-158h] BYREF
  char dest[287]; // [sp+113Ch] [bp-138h] BYREF
  unsigned __int8 v12; // [sp+125Bh] [bp-19h]
  unsigned __int8 *v13; // [sp+125Ch] [bp-18h]
  unsigned int v14; // [sp+1260h] [bp-14h]
  int v15; // [sp+1264h] [bp-10h]

  v13 = a2;
  v15 = *(_DWORD *)(a1 + 864);
  v14 = *(_DWORD *)(v15 + 4 * (a2[89] + 11552));
  memcpy(dest, (const void *)(v15 + 286 * a2[89] + 9216), 0x11Eu);
  memcpy(v9, v13 + 80, 8u);
  sub_183C88(v9, 8);
  blake2s_init((void *)((unsigned int)v8 & 0xFFFFFFC0), 0x20u);
  blake2s_update((_DWORD *)((unsigned int)v8 & 0xFFFFFFC0), dest, 0x116u);
  blake2s_update((_DWORD *)((unsigned int)v8 & 0xFFFFFFC0), v9, 8u);
  blake2s_final((_DWORD *)((unsigned int)v8 & 0xFFFFFFC0), v10, 0x20u);
  sub_183C88((char *)v10, 32);
  v12 = target_to_diff_kda(v10);
  if ( v12 > 0x27u )
  {
    if ( v12 == v13[88] || v14 <= v12 )
    {
      if ( v14 > v12 || (unsigned __int8)sub_183D24(v10, (_DWORD *)(v15 + 32 * (v13[89] + 1460))) != 1 )
      {
        V_LOCK();
        logfmt_raw(v7, 0x1000u, 0, "diff not enough (%d<%d) not reach pool", v13[88], v14);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_kda_2110/backend_kda_2110.c",
          171,
          "check_nonce_kda",
          15,
          623,
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
      logfmt_raw(v7, 0x1000u, 0, "diff not match (%d!=%d) expected diff %d", v12, v13[88], v14, v4, a2, a1);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_kda_2110/backend_kda_2110.c",
        171,
        "check_nonce_kda",
        15,
        618,
        20,
        v7);
      return 3;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, "hw error calculate diff %d ans diff %d ticket_mask %d", v12, v13[88], 40, v4, a2, a1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_kda_2110/backend_kda_2110.c",
      171,
      "check_nonce_kda",
      15,
      609,
      20,
      v7);
    return 2;
  }
}
