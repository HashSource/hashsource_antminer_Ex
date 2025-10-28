__int64 api_flush()
{
  local_work = 0;
  new_blocks = 0;
  dword_5AC220 = 0;
  last_getwork = 0;
  *(_QWORD *)&total_getworks = 0;
  *(_QWORD *)&total_stale = 0;
  *(_QWORD *)&total_discarded = 0;
  total_go = 0;
  total_ro = 0;
  total_accepted = 0;
  total_rejected = 0;
  total_diff1 = 0;
  total_diff_accepted = 0.0;
  total_diff_rejected = 0.0;
  total_diff_stale = 0.0;
  dbl_5AC228 = 0.0;
  *(_QWORD *)&dword_5AC230 = 0;
  *(_QWORD *)&dword_5AC238 = 0;
  return 0;
}
