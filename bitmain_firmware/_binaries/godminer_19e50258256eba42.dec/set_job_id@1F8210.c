int __fastcall set_job_id(int a1)
{
  int v2; // [sp+Ch] [bp-8h] BYREF

  fpga_write(292, a1);
  return fpga_read(292, &v2);
}
