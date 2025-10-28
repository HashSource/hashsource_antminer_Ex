int __fastcall platform_check_repeat_nonce(int a1, int a2, char *s2)
{
  size_t v3; // r8
  int v5; // r5
  int v7; // r4
  const void *v8; // r7
  void *v9; // r5
  char *v10; // r9
  char *v11; // r11
  void *v12; // r0
  bool v13; // zf
  char *v15; // r5
  char *v16; // r2
  char *v17; // r8
  int v18; // t1
  char *v19; // r0
  char *v20; // r0
  char *v21; // r0
  int v22; // r0
  size_t v23; // [sp+3Ch] [bp-1040h]
  void *v24; // [sp+40h] [bp-103Ch]
  void *ptr; // [sp+44h] [bp-1038h]
  void *v26; // [sp+48h] [bp-1034h]
  char *v27; // [sp+4Ch] [bp-1030h]
  _BYTE v28[32]; // [sp+58h] [bp-1024h] BYREF
  _BYTE v29[4100]; // [sp+78h] [bp-1004h] BYREF

  v3 = *(_DWORD *)(a1 + 796);
  v5 = *(_DWORD *)(a1 + 452);
  v7 = v3 * 2 * a2;
  v8 = (const void *)(v5 + v7);
  v23 = v3 + v7;
  if ( memcmp((const void *)(v5 + v7), s2, v3) )
  {
    v9 = (void *)(v5 + v3 + v7);
    if ( memcmp(v9, s2, v3) )
    {
      memcpy(v9, v8, v3);
      memcpy((void *)(*(_DWORD *)(a1 + 452) + v7), s2, v3);
      return 0;
    }
  }
  v10 = (char *)calloc(2 * v3 + 1, 1u);
  v26 = v10;
  v11 = (char *)calloc(2 * v3 + 1, 1u);
  v24 = v11;
  v12 = calloc(2 * v3 + 1, 1u);
  v13 = v10 == 0;
  if ( v10 )
    v13 = v11 == 0;
  ptr = v12;
  if ( v13 )
  {
    if ( v12 )
      goto LABEL_17;
    if ( !v11 )
      goto LABEL_9;
LABEL_18:
    free(v24);
    goto LABEL_9;
  }
  if ( !v12 )
    goto LABEL_18;
  if ( v3 )
  {
    v15 = s2 - 1;
    v16 = &s2[v3 - 1];
    v17 = (char *)v12;
    v27 = v16;
    do
    {
      v18 = (unsigned __int8)*++v15;
      v19 = v10;
      v10 += 2;
      sprintf(v19, "%02x", v18);
      v20 = v11;
      v11 += 2;
      sprintf(v20, "%02x", *(unsigned __int8 *)(*(_DWORD *)(a1 + 452) + v7 + v15 - s2));
      v21 = v17;
      v17 += 2;
      v12 = (void *)sprintf(v21, "%02x", *(unsigned __int8 *)(*(_DWORD *)(a1 + 452) + v23 + v15 - s2));
    }
    while ( v15 != v27 );
  }
  V_LOCK(v12);
  V_INT((int)v28, "chain");
  v22 = logfmt_raw((int)v29, 0x1000u);
  V_UNLOCK(v22);
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_E9-Pro_release/build/rootfs/buildroot/tmp/release/build/godminer-origi"
    "n_godminer-new/backend/backend_base.c",
    153,
    "platform_check_repeat_nonce",
    27,
    101,
    20,
    v29);
LABEL_17:
  free(ptr);
  if ( v24 )
    goto LABEL_18;
LABEL_9:
  if ( v26 )
    free(v26);
  return 4;
}
