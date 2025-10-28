int __fastcall stratum_prepare_upstream_work_vbk(int a1, int a2, char *s)
{
  int v3; // r3
  int v4; // r6
  __int64 v5; // r4
  int v6; // lr
  int v7; // r12

  v3 = *(_DWORD *)(a2 + 2080);
  v4 = *(_DWORD *)(a1 + 1136);
  v5 = *(_QWORD *)(a1 + 1248);
  v6 = *(_DWORD *)(a1 + 1240);
  v7 = *(_DWORD *)(a1 + 1236);
  *(_DWORD *)(a2 + 2080) = v3 + 1;
  snprintf(
    s,
    0x400u,
    "{\"command\":\"MINING_SUBMIT\",\"request_id\":{\"data\":%d,\"type\":\"REQUEST_ID\"},\"job_id\":{\"data\":%d,\"type\""
    ":\"JOB_ID\"},\"nTime\":{\"data\":%ld,\"type\":\"TIMESTAMP\"},\"nonce\":{\"data\":%u,\"type\":\"NONCE\"},\"extra_nonc"
    "e\":{\"data\":%lld,\"type\":\"EXTRA_NONCE\"}}",
    v3,
    v7,
    v6,
    v4,
    v5);
  return 0;
}
