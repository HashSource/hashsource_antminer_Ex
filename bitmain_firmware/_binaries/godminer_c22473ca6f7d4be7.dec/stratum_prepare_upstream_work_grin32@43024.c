int __fastcall stratum_prepare_upstream_work_grin32(int a1, int a2, char *a3)
{
  int v3; // r10
  int v7; // r4
  int v8; // t1
  size_t v9; // r0
  int v10; // r0
  char *v11; // r6
  size_t v12; // r0
  void *v13; // r0
  __int64 v15; // [sp+18h] [bp-234h]
  char src[32]; // [sp+28h] [bp-224h] BYREF
  char s[516]; // [sp+48h] [bp-204h] BYREF

  v3 = *(_DWORD *)(a1 + 1164);
  v15 = *(_QWORD *)(a1 + 1136);
  memset(s, 0, 0x200u);
  v7 = v3 - 4;
  do
  {
    v8 = *(_DWORD *)(v7 + 4);
    v7 += 4;
    snprintf(src, 0x20u, "%d,", v8);
    v9 = strlen(s);
    v10 = stpcpy(&s[v9], src);
  }
  while ( v7 != v3 + 160 );
  v11 = (char *)v10;
  snprintf(src, 0x20u, "%d", *(_DWORD *)(v3 + 164));
  strcpy(v11, src);
  snprintf(
    a3,
    0x400u,
    "{\"id\":\"%s\",\"jsonrpc\":\"2.0\",\"method\":\"submit\",\"params\":{\"edge_bits\":%d,\"height\":%d,\"job_id\":%s,\""
    "nonce\":%llu,\"pow\":[",
    (const char *)(a2 + 1844),
    *(_DWORD *)(a1 + 1144),
    *(_DWORD *)(a1 + 1148),
    *(const char **)(a1 + 1152),
    v15);
  v12 = strlen(a3);
  strcpy((char *)stpcpy(&a3[v12], s), "]}}\r\n");
  v13 = *(void **)(a1 + 1164);
  if ( v13 )
    free(v13);
  return 0;
}
