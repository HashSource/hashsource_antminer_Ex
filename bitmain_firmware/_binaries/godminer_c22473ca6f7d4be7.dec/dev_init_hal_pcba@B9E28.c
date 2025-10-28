int dev_init_hal_pcba()
{
  int v0; // r4
  int *v1; // r5
  const char *v2; // r7
  int v3; // r6
  unsigned int hash_on_plug; // r9
  const char *v5; // r0
  int v6; // r3
  int v7; // r2

  v0 = platform_init();
  if ( v0 )
    return sub_B9DA8();
  LOWORD(v1) = -14664;
  LOWORD(v3) = -10948;
  HIWORD(v1) = (unsigned int)&unk_16B4C8 >> 16;
  LOWORD(v2) = -404;
  *v1 = 0;
  HIWORD(v3) = (unsigned int)&unk_16C33C >> 16;
  hash_on_plug = get_hash_on_plug();
  LOWORD(v5) = -424;
  HIWORD(v5) = (unsigned int)"M\n" >> 16;
  printf(v5, hash_on_plug);
  do
  {
    while ( ((hash_on_plug >> v0) & 1) == 0 )
    {
      if ( ++v0 == 16 )
        goto LABEL_6;
    }
    v6 = *v1;
    v7 = v0;
    HIWORD(v2) = (unsigned int)"OOM\n" >> 16;
    *(_DWORD *)(v3 + 8 * *v1) = v0++;
    *(_BYTE *)(v3 + 8 * v6 + 4) = 1;
    printf(v2, v6, v7);
    ++*v1;
  }
  while ( v0 != 16 );
LABEL_6:
  enable_bypass_mode();
  dev_config_hal((int)"ckoo_hash_init");
  return 0;
}
