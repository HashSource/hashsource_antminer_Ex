int is_dag_acc_done()
{
  int v1; // [sp+4h] [bp-8h] BYREF

  v1 = 0;
  fpga_read(256, &v1);
  return (HIBYTE(v1) >> 1) & 1;
}
