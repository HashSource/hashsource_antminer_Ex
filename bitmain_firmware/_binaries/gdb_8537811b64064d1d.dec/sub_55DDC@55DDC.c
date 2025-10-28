int sub_55DDC()
{
  int result; // r0

  sub_53420(
    "dump",
    1,
    (int)sub_552A4,
    (int)"Dump target code/data to a local file.",
    &dword_4747D0,
    (int)"dump ",
    0,
    (int **)&dword_474744);
  sub_53420(
    "append",
    1,
    (int)sub_55268,
    (int)"Append target code/data to a local file.",
    &dword_4747D4,
    (int)"append ",
    0,
    (int **)&dword_474744);
  sub_55304(
    "memory",
    (int)sub_55930,
    (int)"Write contents of memory to a raw binary file.\n"
         "Arguments are FILE START STOP.  Writes the contents of memory within the\n"
         "range [START .. STOP) to the specified FILE in raw target ordered bytes.");
  sub_55304(
    "value",
    (int)sub_556C4,
    (int)"Write the value of an expression to a raw binary file.\n"
         "Arguments are FILE EXPRESSION.  Writes the value of EXPRESSION to\n"
         "the specified FILE in raw target ordered bytes.");
  sub_53420(
    "srec",
    -1,
    (int)sub_5522C,
    (int)"Write target code/data to an srec file.",
    &dword_4747CC,
    (int)"dump srec ",
    0,
    (int **)&dword_4747D0);
  sub_53420(
    "ihex",
    -1,
    (int)sub_551F0,
    (int)"Write target code/data to an intel hex file.",
    &dword_4747C8,
    (int)"dump ihex ",
    0,
    (int **)&dword_4747D0);
  sub_53420(
    "verilog",
    -1,
    (int)sub_551B4,
    (int)"Write target code/data to a verilog hex file.",
    &dword_4747C4,
    (int)"dump verilog ",
    0,
    (int **)&dword_4747D0);
  sub_53420(
    "tekhex",
    -1,
    (int)sub_55178,
    (int)"Write target code/data to a tekhex file.",
    &dword_4747C0,
    (int)"dump tekhex ",
    0,
    (int **)&dword_4747D0);
  sub_53420(
    "binary",
    -1,
    (int)sub_5513C,
    (int)"Write target code/data to a raw binary file.",
    &dword_4747BC,
    (int)"dump binary ",
    0,
    (int **)&dword_4747D0);
  sub_53420(
    "binary",
    -1,
    (int)sub_55100,
    (int)"Append target code/data to a raw binary file.",
    &dword_4747B8,
    (int)"append binary ",
    0,
    &dword_4747D4);
  sub_5329C(
    "memory",
    -1,
    (int)sub_5591C,
    (int)"Write contents of memory to an srec file.\n"
         "Arguments are FILE START STOP.  Writes the contents of memory\n"
         "within the range [START .. STOP) to the specified FILE in srec format.",
    (int **)&dword_4747CC);
  sub_5329C(
    "value",
    -1,
    (int)sub_556B0,
    (int)"Write the value of an expression to an srec file.\n"
         "Arguments are FILE EXPRESSION.  Writes the value of EXPRESSION\n"
         "to the specified FILE in srec format.",
    (int **)&dword_4747CC);
  sub_5329C(
    "memory",
    -1,
    (int)sub_55908,
    (int)"Write contents of memory to an ihex file.\n"
         "Arguments are FILE START STOP.  Writes the contents of memory within\n"
         "the range [START .. STOP) to the specified FILE in intel hex format.",
    (int **)&dword_4747C8);
  sub_5329C(
    "value",
    -1,
    (int)sub_5569C,
    (int)"Write the value of an expression to an ihex file.\n"
         "Arguments are FILE EXPRESSION.  Writes the value of EXPRESSION\n"
         "to the specified FILE in intel hex format.",
    (int **)&dword_4747C8);
  sub_5329C(
    "memory",
    -1,
    (int)sub_558F4,
    (int)"Write contents of memory to a verilog hex file.\n"
         "Arguments are FILE START STOP.  Writes the contents of memory within\n"
         "the range [START .. STOP) to the specified FILE in verilog hex format.",
    (int **)&dword_4747C4);
  sub_5329C(
    "value",
    -1,
    (int)sub_55688,
    (int)"Write the value of an expression to a verilog hex file.\n"
         "Arguments are FILE EXPRESSION.  Writes the value of EXPRESSION\n"
         "to the specified FILE in verilog hex format.",
    (int **)&dword_4747C4);
  sub_5329C(
    "memory",
    -1,
    (int)sub_558E0,
    (int)"Write contents of memory to a tekhex file.\n"
         "Arguments are FILE START STOP.  Writes the contents of memory\n"
         "within the range [START .. STOP) to the specified FILE in tekhex format.",
    (int **)&dword_4747C0);
  sub_5329C(
    "value",
    -1,
    (int)sub_55674,
    (int)"Write the value of an expression to a tekhex file.\n"
         "Arguments are FILE EXPRESSION.  Writes the value of EXPRESSION\n"
         "to the specified FILE in tekhex format.",
    (int **)&dword_4747C0);
  sub_5329C(
    "memory",
    -1,
    (int)sub_558CC,
    (int)"Write contents of memory to a raw binary file.\n"
         "Arguments are FILE START STOP.  Writes the contents of memory\n"
         "within the range [START .. STOP) to the specified FILE in binary format.",
    (int **)&dword_4747BC);
  sub_5329C(
    "value",
    -1,
    (int)sub_55660,
    (int)"Write the value of an expression to a raw binary file.\n"
         "Arguments are FILE EXPRESSION.  Writes the value of EXPRESSION\n"
         "to the specified FILE in raw target ordered bytes.",
    (int **)&dword_4747BC);
  sub_5329C(
    "memory",
    -1,
    (int)sub_558B8,
    (int)"Append contents of memory to a raw binary file.\n"
         "Arguments are FILE START STOP.  Writes the contents of memory within the\n"
         "range [START .. STOP) to the specified FILE in raw target ordered bytes.",
    (int **)&dword_4747B8);
  sub_5329C(
    "value",
    -1,
    (int)sub_5564C,
    (int)"Append the value of an expression to a raw binary file.\n"
         "Arguments are FILE EXPRESSION.  Writes the value of EXPRESSION\n"
         "to the specified FILE in raw target ordered bytes.",
    (int **)&dword_4747B8);
  result = sub_539E8(
             "restore",
             1,
             (int)sub_5593C,
             (int)"Restore the contents of FILE to target memory.\n"
                  "Arguments are FILE OFFSET START END where all except FILE are optional.\n"
                  "OFFSET will be added to the base address of the file (default zero).\n"
                  "If START and END are given, only the file contents within that range\n"
                  "(file relative) will be restored to target memory.");
  *(_DWORD *)(result + 64) = 1010984;
  return result;
}
