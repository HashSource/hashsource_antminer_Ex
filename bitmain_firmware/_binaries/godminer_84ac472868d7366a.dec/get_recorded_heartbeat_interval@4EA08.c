int __fastcall get_recorded_heartbeat_interval(int a1, unsigned int a2)
{
  if ( a2 > 9 )
    return -1;
  else
    return max_heartbeat_interval[10 * a1 + a2];
}
