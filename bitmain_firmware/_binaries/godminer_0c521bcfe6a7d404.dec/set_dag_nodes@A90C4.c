int __fastcall set_dag_nodes(__int64 a1)
{
  return fpga_write(296, a1 >> 6);
}
