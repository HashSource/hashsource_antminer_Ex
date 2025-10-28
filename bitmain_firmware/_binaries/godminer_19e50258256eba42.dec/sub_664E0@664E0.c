int __fastcall sub_664E0(int a1, int a2, char *a3)
{
  int v4; // r0
  char v6; // [sp+10h] [bp-10F4h] BYREF
  char *v7; // [sp+14h] [bp-10F0h]
  int v8; // [sp+18h] [bp-10ECh]
  int v9; // [sp+1Ch] [bp-10E8h]
  _BYTE v10[32]; // [sp+24h] [bp-10E0h] BYREF
  char nptr[32]; // [sp+1024h] [bp-E0h] BYREF
  char v12[4]; // [sp+1044h] [bp-C0h] BYREF
  char v13[68]; // [sp+1048h] [bp-BCh] BYREF
  char v14[68]; // [sp+108Ch] [bp-78h] BYREF
  char s[20]; // [sp+10D0h] [bp-34h] BYREF
  signed int v16; // [sp+10E4h] [bp-20h]
  int v17; // [sp+10E8h] [bp-1Ch]
  int v18; // [sp+10ECh] [bp-18h]
  void *dest; // [sp+10F0h] [bp-14h]
  int v20; // [sp+10F4h] [bp-10h]

  v9 = a1;
  v8 = a2;
  v7 = a3;
  v20 = 16 - 2 * *(_DWORD *)(a2 + 76);
  dest = &v6;
  if ( *(_DWORD *)(a1 + 1132) )
  {
    v18 = *(_DWORD *)(v9 + 1132);
    sprintf(s, "%016llx", *(_QWORD *)(v9 + 1072));
    memcpy(dest, &s[2 * *(_DWORD *)(v8 + 76)], 17 - 2 * *(_DWORD *)(v8 + 76));
    bin2hex((int)v14, v18 + 64, 0x20u);
    bin2hex((int)v13, v18 + 32, 0x20u);
    *(_DWORD *)(v8 + 1920) += 100;
    v17 = *(_DWORD *)(v8 + 1920) % 100;
    snprintf(v12, 3u, "%02d", v17);
    snprintf(nptr, 0x20u, "%d", *(_DWORD *)(v8 + 1920));
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, "lastTwoChars-idStr pre: %s-%s", v12, nptr);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      174,
      "stratum_prepare_upstream_work_eth_2282",
      38,
      808,
      20,
      v10);
    v16 = strlen(nptr);
    if ( v16 <= 1 )
    {
      snprintf(nptr, 0x20u, "%c%c", *(unsigned __int8 *)dest, *((unsigned __int8 *)dest + 7));
    }
    else
    {
      nptr[v16 - 2] = *(_BYTE *)dest;
      nptr[v16 - 1] = *((_BYTE *)dest + 7);
    }
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, "lastTwoChars-idStr post: %s-%s", v12, nptr);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth_2282/frontend_eth_2282.c",
      174,
      "stratum_prepare_upstream_work_eth_2282",
      38,
      817,
      20,
      v10);
    v4 = atoi(nptr);
    *(_DWORD *)(v8 + 1920) = v4;
    if ( *(_BYTE *)(v8 + 1656) )
      sprintf(
        v7,
        "{\"worker\":\"%s\",\"id\":%d,\"jsonrpc\":\"2.0\",\"method\":\"eth_submitWork\",\"params\":[\"0x%s\",\"0x%s\",\"0x%s\"]}",
        *(const char **)(v8 + 24),
        *(_DWORD *)(v8 + 1920),
        (const char *)dest,
        v14,
        v13);
    else
      sprintf(
        v7,
        "{\"id\":%d,\"method\":\"mining.submit\", \"params\":[\"%s\",\"%s\",\"%s\"]}",
        *(_DWORD *)(v8 + 1920),
        *(const char **)(v8 + 16),
        *(const char **)(v9 + 1124),
        (const char *)dest);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "work->private");
    return 3;
  }
}
