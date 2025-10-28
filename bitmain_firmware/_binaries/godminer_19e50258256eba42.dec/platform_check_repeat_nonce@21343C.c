int __fastcall platform_check_repeat_nonce(_DWORD *a1, int a2, unsigned __int8 *a3)
{
  _BYTE v8[12]; // [sp+48h] [bp-104Ch] BYREF
  _DWORD v9[7]; // [sp+1048h] [bp-4Ch] BYREF
  int v10; // [sp+1064h] [bp-30h]
  void *ptr; // [sp+106Ch] [bp-28h]
  void *v12; // [sp+1070h] [bp-24h]
  void *v13; // [sp+1074h] [bp-20h]
  size_t v14; // [sp+1078h] [bp-1Ch]
  size_t v15; // [sp+107Ch] [bp-18h]
  size_t n; // [sp+1080h] [bp-14h]
  size_t i; // [sp+1084h] [bp-10h]

  n = a1[219];
  v15 = 2 * n * a2;
  v14 = v15 + n;
  if ( !memcmp((const void *)(a1[131] + v15), a3, n) || !memcmp((const void *)(a1[131] + v14), a3, n) )
  {
    v13 = calloc(2 * n + 1, 1u);
    v12 = calloc(2 * n + 1, 1u);
    ptr = calloc(2 * n + 1, 1u);
    if ( v13 && v12 && ptr )
    {
      for ( i = 0; n > i; ++i )
      {
        sprintf((char *)v13 + 2 * i, "%02x", a3[i]);
        sprintf((char *)v12 + 2 * i, "%02x", *(unsigned __int8 *)(a1[131] + i + v15));
        sprintf((char *)ptr + 2 * i, "%02x", *(unsigned __int8 *)(a1[131] + i + v14));
      }
      V_LOCK();
      sub_2131EC((int)v9, (int)a1[68]);
      logfmt_raw(
        v8,
        0x1000u,
        0,
        v10,
        v9[0],
        v9[1],
        v9[2],
        v9[3],
        v9[4],
        v9[5],
        v9[6],
        v10,
        "asic %d repeat nonce %s %s %s",
        a2,
        v13,
        v12,
        ptr);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_base.c",
        150,
        "platform_check_repeat_nonce",
        27,
        101,
        20,
        v8);
    }
    if ( ptr )
      free(ptr);
    if ( v12 )
      free(v12);
    if ( v13 )
      free(v13);
    return 4;
  }
  else
  {
    memcpy((void *)(a1[131] + v14), (const void *)(a1[131] + v15), n);
    memcpy((void *)(a1[131] + v15), a3, n);
    return 0;
  }
}
