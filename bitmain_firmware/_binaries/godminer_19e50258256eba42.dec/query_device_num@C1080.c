int query_device_num()
{
  int (**v0)(); // r0

  v0 = dev_ctrl();
  return (*v0)();
}
