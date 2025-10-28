size_t __fastcall dev_send_work_cmd_hal(int a1, int a2, unsigned int a3)
{
  int v7; // [sp+10h] [bp-Ch]
  unsigned int i; // [sp+14h] [bp-8h]

  v7 = 0;
  for ( i = 0; a3 >> 7 > i; ++i )
    v7 += uart_send(g_chain_info[2 * a1], (const void *)(a2 + (i << 7)), 0x80u);
  return v7 + uart_send(g_chain_info[2 * a1], (const void *)(a2 + (i << 7)), a3 & 0x7F);
}
