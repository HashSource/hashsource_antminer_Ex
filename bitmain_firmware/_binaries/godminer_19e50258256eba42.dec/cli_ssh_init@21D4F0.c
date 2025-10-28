int cli_ssh_init()
{
  uart_uninit();
  fpga_uninit();
  platform_uninit();
  return 0;
}
