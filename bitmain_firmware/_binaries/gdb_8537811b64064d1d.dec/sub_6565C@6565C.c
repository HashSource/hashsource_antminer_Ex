int __fastcall sub_6565C(int a1, int a2, int a3)
{
  int v3; // r4
  int v4; // r0

  if ( a3 )
    sub_94708("-list-features should be passed no arguments");
  v3 = *(_DWORD *)sub_243004(a1);
  sub_2578D4(v3, 1);
  sub_257610(v3, 0, "frozen-varobjs");
  sub_257610(v3, 0, "pending-breakpoints");
  sub_257610(v3, 0, "thread-info");
  sub_257610(v3, 0, "data-read-memory-bytes");
  sub_257610(v3, 0, "breakpoint-notifications");
  sub_257610(v3, 0, "ada-task-info");
  sub_257610(v3, 0, "language-option");
  sub_257610(v3, 0, "info-gdb-mi-command");
  sub_257610(v3, 0, "undefined-command-error-code");
  sub_257610(v3, 0, "exec-run-start-option");
  v4 = ((int (__fastcall *)(int))loc_1577CC)(2);
  if ( ((int (__fastcall *)(int))loc_1578F4)(v4) )
    sub_257610(v3, 0, "python");
  return sub_257374(v3, 1);
}
