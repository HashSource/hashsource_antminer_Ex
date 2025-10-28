int __fastcall sub_779F4(int a1, int a2, char *a3)
{
  int v4; // r4
  int v5; // r5
  int v6; // r0
  int v7; // r3
  _BYTE v12[28]; // [sp+28h] [bp-101Ch] BYREF
  void *v13; // [sp+1028h] [bp-1Ch]
  void *v14; // [sp+102Ch] [bp-18h]
  void *ptr; // [sp+1030h] [bp-14h]
  int v16; // [sp+1034h] [bp-10h]

  v16 = *(_DWORD *)(a1 + 1132);
  if ( v16 )
  {
    ptr = abin2hex(v16 + 1468, 4u);
    v14 = abin2hex(v16 + 1480, 0x1Cu);
    v13 = abin2hex(v16 + 1508, 0x543u);
    V_LOCK();
    v4 = *(_DWORD *)(a2 + 1920);
    v5 = *(_DWORD *)(a1 + 1124);
    v6 = target_to_diff_zec(a1 + 1032);
    logfmt_raw(v12, 0x1000u, 0, "prepare submit, json id %d, job %s, ntime %s, nonce %s, diff %d", v4, v5, ptr, v14, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_zec/frontend_zec.c",
      164,
      "stratum_prepare_upstream_work_zec",
      33,
      322,
      20,
      v12);
    v7 = *(_DWORD *)(a2 + 1920);
    *(_DWORD *)(a2 + 1920) = v7 + 1;
    snprintf(
      a3,
      0xC00u,
      "{\"id\": %d, \"method\": \"mining.submit\", \"params\": [\"%s\", \"%s\", \"%s\", \"%s\", \"%s\"]}",
      v7,
      *(const char **)(a2 + 16),
      *(const char **)(a1 + 1124),
      (const char *)ptr,
      (const char *)v14,
      (const char *)v13);
    free(ptr);
    free(v14);
    free(v13);
    return 0;
  }
  else
  {
    printf("invalid pointer(%s)!\n", "private");
    return 3;
  }
}
