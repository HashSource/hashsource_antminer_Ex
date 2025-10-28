loff_t __fastcall axi_fpga_dev_llseek(file *filp, loff_t offset, int whence)
{
  if ( whence == 1 )
  {
    offset += filp->f_pos;
  }
  else if ( whence == 2 )
  {
    offset += 0x7FFFFFFLL;
  }
  else if ( whence )
  {
    return -22;
  }
  if ( (unsigned __int64)offset > 0x8000000 )
    return -22;
  filp->f_pos = offset;
  return offset;
}
