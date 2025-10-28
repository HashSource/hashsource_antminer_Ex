int godminer_register_status_monitor()
{
  int v0; // r0
  int v1; // r0

  LOWORD(v0) = -21508;
  HIWORD(v0) = (unsigned int)&loc_2AE28 >> 16;
  add_chip_status_observer(v0);
  add_heartbeat_observer((int)godminer_heartbeat_monitor);
  LOWORD(v1) = -20564;
  HIWORD(v1) = (unsigned int)&jpt_2B1BC[5] >> 16;
  return add_fanspeed_observer(v1);
}
