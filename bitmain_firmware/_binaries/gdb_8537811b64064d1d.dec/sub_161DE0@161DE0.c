int sub_161DE0()
{
  sub_539E8(
    "generate-core-file",
    3,
    (int)sub_161940,
    (int)"Save a core file with the current state of the debugged process.\n"
         "Argument is optional filename.  Default filename is 'core.<process_id>'.");
  return sub_547D8((int)"gcore", "generate-core-file", 3, 1);
}
