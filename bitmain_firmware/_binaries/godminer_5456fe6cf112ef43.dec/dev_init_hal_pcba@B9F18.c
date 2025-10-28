int dev_init_hal_pcba()
{
  int v0; // r0
  int v1; // r4
  unsigned int hash_on_plug; // r9
  int v3; // r3
  int v4; // r2

  v0 = platform_init();
  v1 = v0;
  if ( v0 )
    return sub_B9E98(v0);
  total_chain = 0;
  hash_on_plug = get_hash_on_plug(0);
  printf("plug_on_status: %x\n", hash_on_plug);
  do
  {
    while ( ((hash_on_plug >> v1) & 1) == 0 )
    {
      if ( ++v1 == 16 )
        goto LABEL_6;
    }
    v3 = total_chain;
    v4 = v1;
    g_chain_info[2 * total_chain] = v1++;
    LOBYTE(g_chain_info[2 * v3 + 1]) = 1;
    printf("chain_offset %d, chain %d\n", v3, v4);
    ++total_chain;
  }
  while ( v1 != 16 );
LABEL_6:
  enable_bypass_mode();
  dev_config_hal((int)"");
  return 0;
}
