int __fastcall sub_A244C(int a1, int a2, int a3)
{
  _BYTE v6[12]; // [sp+20h] [bp-100Ch] BYREF
  char *s2; // [sp+1020h] [bp-Ch]
  int v8; // [sp+1024h] [bp-8h]

  v8 = a3;
  if ( *(_DWORD *)(a1 + 1132) )
  {
    s2 = *(char **)(a1 + 1132);
    if ( !strncasecmp((const char *)(v8 + 66), s2, 0x20u) )
    {
      *(_QWORD *)(a1 + 1072) = *(_QWORD *)(v8 + 26);
      memcpy(s2 + 32, (const void *)(v8 + 98), 0x20u);
      memcpy(s2 + 64, (const void *)(v8 + 34), 0x20u);
      return 0;
    }
    else
    {
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, "nonce retired");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_E11_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/dhash_content/eth_2282/eth_2282/eth_2282_content.c",
        178,
        "nonce_pop_handler_eth_2282",
        26,
        108,
        20,
        v6);
      return 1;
    }
  }
  else
  {
    printf("invalid pointer(%s)!\n", "work->private");
    return 0;
  }
}
