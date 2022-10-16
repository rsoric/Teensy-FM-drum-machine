#include "Arduino.h"
#include <LiquidCrystal_I2C.h>
#include <RotaryEncoder.h>
#include <parameters.h>
#include <elapsedMillis.h>
#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>
#include "TeensyThreads.h"
#include <RBD_Timer.h>
#include <RBD_Button.h>


// GUItool: begin automatically generated code
AudioSynthWaveformSine   chat_op6; //xy=61.00003433227539,882.3334197998047
AudioSynthWaveformSine   snre_op3;  //xy=67.33335876464844,342.0001678466797
AudioSynthWaveformSine   tom_op6; //xy=115.00001525878906,2116.666477203369
AudioSynthWaveformSine   ohat_op3; //xy=121.11109924316406,985.8520278930664
AudioSynthWaveformSine   tamb_op6; //xy=125.83332824707031,1774.583251953125
AudioSynthWaveformSine   chat_op2; //xy=132.00005340576172,579.3333492279053
AudioSynthWaveformModulated chat_op3; //xy=134.0000991821289,658.0001821517944
AudioSynthWaveformModulated snre_op6;   //xy=146.44451141357422,438.44454193115234
AudioSynthWaveformSine   snre_op5; //xy=146.44445037841797,513.5555438995361
AudioSynthWaveformModulated chat_op5; //xy=155.00007247924805,804.0004138946533
AudioEffectEnvelope      chat_op5_env; //xy=160.00021743774414,731.0003528594971
AudioSynthWaveformModulated clap_op6; //xy=159.38086700439453,1455.6192245483398
AudioSynthWaveformSine   clap_op4; //xy=164.80951690673828,1384.3334159851074
AudioSynthWaveformSine   ohat_op5; //xy=178.33332061767578,1160.9628829956055
AudioSynthWaveformModulated ohat_op6; //xy=206.88893127441406,1080.0742111206055
AudioEffectEnvelope      chat_op6_env; //xy=215.00014877319336,916.3337478637695
AudioEffectEnvelope      snre_op3_env; //xy=238.444580078125,340.1111717224121
AudioEffectEnvelope      ohat_op3_env; //xy=283.33343505859375,979.5185451507568
AudioEffectEnvelope      tom_op6_env; //xy=286.1112365722656,2114.7774810791016
AudioEffectEnvelope      tamb_op6_env; //xy=296.9445495605469,1772.6942558288574
AudioSynthWaveformSine   kick_op2;          //xy=335.0000305175781,127.66667366027832
AudioEffectEnvelope      chat_op2_env; //xy=335.0001640319824,580.0001792907715
AudioEffectEnvelope      snre_op5_env; //xy=340.66675567626953,512.4445705413818
AudioSynthWaveformSine   kick_op4; //xy=345.00007247924805,193.66667556762695
AudioSynthWaveformModulated chat_op4;  //xy=356.00003814697266,720.3333549499512
AudioEffectEnvelope      snre_op6_env; //xy=357.3334503173828,427.0001983642578
AudioEffectEnvelope      clap_op6_env; //xy=358.5238037109375,1496.6190614700317
AudioSynthWaveformModulated kick_op6; //xy=368.5001564025879,254.6666774749756
AudioEffectEnvelope      chat_op3_env; //xy=368.00020599365234,635.0003852844238
AudioEffectEnvelope      clap_op4_env; //xy=366.952392578125,1385.6190605163574
AudioEffectEnvelope      ohat_op5_env; //xy=378.55560302734375,1154.8518810272217
AudioSynthWaveformModulated snre_op2; //xy=409.2223205566406,340.8888912200928
AudioEffectEnvelope      ohat_op6_env; //xy=411.11119842529297,1070.8520278930664
AudioSynthWaveformModulated ohat_op2; //xy=450.7778549194336,980.2962551116943
AudioSynthWaveformModulated tamb_op3; //xy=456.2737731933594,1671.500238418579
AudioSynthWaveformModulated tom_op5; //xy=456.88897705078125,2115.555200576782
AudioSynthWaveformModulated tamb_op5; //xy=467.7222900390625,1773.471975326538
AudioSynthWaveformSine   tom_op2; //xy=474.9405059814453,1926.5474910736084
AudioSynthWaveformSine   tamb_op2; //xy=485.77381896972656,1584.4642658233643
AudioEffectEnvelope      kick_op2_env; //xy=509.66676330566406,132.666672706604
AudioSynthWaveformModulated tom_op3; //xy=506.69046783447266,2051.08354473114
AudioEffectEnvelope      kick_op4_env; //xy=516.5001831054688,194.66679763793945
AudioSynthWaveformSine   clap_op2; //xy=529.5238037109375,1320.4761962890625
AudioMixer4              snre_56_mixer; //xy=546.2963638305664,478.51852798461914
AudioEffectEnvelope      kick_op6_env; //xy=548.5001602172852,241.66677856445312
AudioSynthWaveformModulated clap_op3; //xy=546.6665649414062,1391.9048480987549
AudioSynthWaveformModulated clap_op5; //xy=555.238037109375,1493.3334369659424
AudioEffectEnvelope      chat_op4_env;  //xy=576.0001602172852,711.3335990905762
AudioEffectEnvelope      snre_op2_env; //xy=585.3334503173828,347.33333587646484
AudioMixer4              ohat_56_mixer; //xy=624.1852569580078,1112.9259338378906
AudioEffectEnvelope      ohat_op2_env; //xy=630.2223052978516,986.7407093048096
AudioEffectEnvelope      tom_op5_env; //xy=633.0001068115234,2121.9996452331543
AudioEffectEnvelope      tamb_op5_env; //xy=643.8334197998047,1779.9164199829102
AudioEffectEnvelope      tom_op3_env; //xy=684.5833415985107,1977.0837078094482
AudioMixer4              chat_mixer; //xy=690.2224502563477,575.0740737915039
AudioSynthWaveformModulated kick_op1; //xy=698.6667709350586,140.666672706604
AudioSynthWaveformModulated kick_op5; //xy=699.5002460479736,247.66667699813843
AudioSynthWaveformModulated kick_op3; //xy=701.6667709350586,200.66667556762695
AudioEffectEnvelope      tom_op2_env; //xy=695.8333053588867,1908.3332996368408
AudioEffectEnvelope      tamb_op3_env; //xy=704.166618347168,1670.000400543213
AudioEffectEnvelope      tamb_op2_env; //xy=706.666618347168,1566.2500743865967
AudioEffectEnvelope      clap_op3_env; //xy=719.8095321655273,1377.9048671722412
AudioEffectEnvelope      clap_op5_env; //xy=735.3810195922852,1469.333417892456
AudioEffectEnvelope      clap_op2_env; //xy=736.6666870117188,1314.761962890625
AudioSynthWaveformModulated snre_op4; //xy=763.888988494873,461.11119079589844
AudioSynthWaveformModulated snre_op1; //xy=773.0000190734863,346.6666679382324
AudioSynthWaveformSine   tone_op2; //xy=780.6666984558105,1218.6666650772095
AudioSynthWaveformModulated ohat_op4; //xy=808.7778434753418,1100.5185642242432
AudioSynthWaveformModulated ohat_op1; //xy=817.8888740539551,986.0740413665771
AudioSynthWaveformModulated tom_op4; //xy=820.666675567627,2121.332977294922
AudioSynthWaveformModulated tamb_op4; //xy=831.4999885559082,1779.2497520446777
AudioSynthWaveformModulated chat_op1; //xy=854.0000801086426,581.0000162124634
AudioEffectEnvelope      kick_op5_env; //xy=876.5003509521484,231.66679859161377
AudioEffectEnvelope      kick_op1_env; //xy=878.6667785644531,140.66667366027832
AudioEffectEnvelope      kick_op3_env; //xy=879.6668548583984,186.66667556762695
AudioEffectEnvelope      snre_op4_env; //xy=937.8890228271484,461.0001697540283
AudioEffectEnvelope      tone_op2_env; //xy=936.6667022705078,1216.6666660308838
AudioEffectEnvelope      snre_op1_env; //xy=949.000186920166,350.6666679382324
AudioMixer4              clap_mixer; //xy=960.9525947570801,1334.2858695983887
AudioMixer4              tom_mixer; //xy=972.5000228881836,1970.4166259765625
AudioEffectEnvelope      ohat_op4_env; //xy=977.7780418395996,1114.407543182373
AudioMixer4              tamb_mixer; //xy=983.3333358764648,1628.3334007263184
AudioEffectEnvelope      ohat_op1_env; //xy=993.8890419006348,990.0740413665771
AudioEffectEnvelope      tom_op4_env; //xy=996.6668434143066,2125.332977294922
AudioEffectEnvelope      tamb_op4_env; //xy=1007.5001564025879,1783.2497520446777
AudioSynthWaveformModulated tamb_op1; //xy=1022.7977180480957,1461.3688468933105
AudioEffectEnvelope      chat_op1_env; //xy=1047.000228881836,589.0000171661377
AudioMixer4              kick_mixer;         //xy=1134.000036239624,195.00001335144043
AudioSynthWaveformModulated tone_op1; //xy=1134.666648864746,1222.6666660308838
AudioMixer4              snre_mixer; //xy=1143.5556411743164,392.2222385406494
AudioSynthWaveformModulated tom_op1; //xy=1141.9643821716309,1980.9520635604858
AudioMixer4              ohat_mixer; //xy=1175.1111602783203,1036.0740585327148
AudioSynthWaveformModulated clap_op1; //xy=1176.6666526794434,1328.571481704712
AudioEffectEnvelope      tamb_op1_env; //xy=1237.440773010254,1505.1188468933105
AudioFilterStateVariable chat_filter; //xy=1257.7412452697754,593.4076690673828
AudioEffectEnvelope      tone_op1_env; //xy=1325.6666564941406,1225.6666660308838
AudioFilterStateVariable ohat_filter;        //xy=1336.8523712158203,981.6298446655273
AudioEffectEnvelope      tom_op1_env; //xy=1356.6073379516602,1957.2020721435547
AudioEffectEnvelope      clap_op1_env; //xy=1373.8095970153809,1328.571418762207
AudioFilterStateVariable tamb_filter; //xy=1452.0833206176758,1433.7500686645508
AudioMixer4              mix1;         //xy=1575.925937652588,590.7408409118652
AudioMixer4              mix2; //xy=1655.4816131591797,1388.0740127563477
AudioMixer4              master; //xy=1938.1481552124023,926.2963485717773
AudioOutputI2S           i2s1;           //xy=2092.0557250976562,928.0556621551514
AudioConnection          patchCord1(chat_op6, chat_op6_env);
AudioConnection          patchCord2(snre_op3, snre_op3_env);
AudioConnection          patchCord3(tom_op6, tom_op6_env);
AudioConnection          patchCord4(ohat_op3, ohat_op3_env);
AudioConnection          patchCord5(tamb_op6, tamb_op6_env);
AudioConnection          patchCord6(chat_op2, chat_op2_env);
AudioConnection          patchCord7(chat_op3, chat_op3_env);
AudioConnection          patchCord8(snre_op6, snre_op6_env);
AudioConnection          patchCord9(snre_op5, snre_op5_env);
AudioConnection          patchCord10(chat_op5, chat_op5_env);
AudioConnection          patchCord11(chat_op5_env, 0, chat_op4, 0);
AudioConnection          patchCord12(clap_op6, clap_op6_env);
AudioConnection          patchCord13(clap_op4, clap_op4_env);
AudioConnection          patchCord14(ohat_op5, ohat_op5_env);
AudioConnection          patchCord15(ohat_op6, ohat_op6_env);
AudioConnection          patchCord16(chat_op6_env, 0, chat_op5, 0);
AudioConnection          patchCord17(snre_op3_env, 0, snre_op2, 0);
AudioConnection          patchCord18(ohat_op3_env, 0, ohat_op2, 0);
AudioConnection          patchCord19(tom_op6_env, 0, tom_op5, 0);
AudioConnection          patchCord20(tamb_op6_env, 0, tamb_op5, 0);
AudioConnection          patchCord21(kick_op2, kick_op2_env);
AudioConnection          patchCord22(chat_op2_env, 0, chat_mixer, 0);
AudioConnection          patchCord23(snre_op5_env, 0, snre_56_mixer, 1);
AudioConnection          patchCord24(kick_op4, kick_op4_env);
AudioConnection          patchCord25(chat_op4, chat_op4_env);
AudioConnection          patchCord26(snre_op6_env, 0, snre_56_mixer, 0);
AudioConnection          patchCord27(snre_op6_env, 0, snre_op6, 0);
AudioConnection          patchCord28(clap_op6_env, 0, clap_op6, 0);
AudioConnection          patchCord29(clap_op6_env, 0, clap_op5, 0);
AudioConnection          patchCord30(kick_op6, kick_op6_env);
AudioConnection          patchCord31(chat_op3_env, 0, chat_op3, 0);
AudioConnection          patchCord32(chat_op3_env, 0, chat_mixer, 1);
AudioConnection          patchCord33(clap_op4_env, 0, clap_op3, 0);
AudioConnection          patchCord34(ohat_op5_env, 0, ohat_56_mixer, 1);
AudioConnection          patchCord35(snre_op2, snre_op2_env);
AudioConnection          patchCord36(ohat_op6_env, 0, ohat_56_mixer, 0);
AudioConnection          patchCord37(ohat_op6_env, 0, ohat_op6, 0);
AudioConnection          patchCord38(ohat_op2, ohat_op2_env);
AudioConnection          patchCord39(tamb_op3, tamb_op3_env);
AudioConnection          patchCord40(tom_op5, tom_op5_env);
AudioConnection          patchCord41(tamb_op5, tamb_op5_env);
AudioConnection          patchCord42(tom_op2, tom_op2_env);
AudioConnection          patchCord43(tamb_op2, tamb_op2_env);
AudioConnection          patchCord44(kick_op2_env, 0, kick_op1, 0);
AudioConnection          patchCord45(tom_op3, tom_op3_env);
AudioConnection          patchCord46(kick_op4_env, 0, kick_op3, 0);
AudioConnection          patchCord47(clap_op2, clap_op2_env);
AudioConnection          patchCord48(snre_56_mixer, 0, snre_op4, 0);
AudioConnection          patchCord49(kick_op6_env, 0, kick_op5, 0);
AudioConnection          patchCord50(clap_op3, clap_op3_env);
AudioConnection          patchCord51(clap_op5, clap_op5_env);
AudioConnection          patchCord52(chat_op4_env, 0, chat_mixer, 2);
AudioConnection          patchCord53(snre_op2_env, 0, snre_op1, 0);
AudioConnection          patchCord54(ohat_56_mixer, 0, ohat_op4, 0);
AudioConnection          patchCord55(ohat_op2_env, 0, ohat_op1, 0);
AudioConnection          patchCord56(tom_op5_env, 0, tom_op4, 0);
AudioConnection          patchCord57(tamb_op5_env, 0, tamb_op4, 0);
AudioConnection          patchCord58(tom_op3_env, 0, tom_op3, 0);
AudioConnection          patchCord59(tom_op3_env, 0, tom_mixer, 1);
AudioConnection          patchCord60(chat_mixer, 0, chat_op1, 0);
AudioConnection          patchCord61(kick_op1, kick_op1_env);
AudioConnection          patchCord62(kick_op5, kick_op5_env);
AudioConnection          patchCord63(kick_op3, kick_op3_env);
AudioConnection          patchCord64(tom_op2_env, 0, tom_mixer, 0);
AudioConnection          patchCord65(tamb_op3_env, 0, tamb_op3, 0);
AudioConnection          patchCord66(tamb_op3_env, 0, tamb_mixer, 1);
AudioConnection          patchCord67(tamb_op2_env, 0, tamb_mixer, 0);
AudioConnection          patchCord68(clap_op3_env, 0, clap_mixer, 1);
AudioConnection          patchCord69(clap_op5_env, 0, clap_mixer, 2);
AudioConnection          patchCord70(clap_op2_env, 0, clap_mixer, 0);
AudioConnection          patchCord71(snre_op4, snre_op4_env);
AudioConnection          patchCord72(snre_op1, snre_op1_env);
AudioConnection          patchCord73(tone_op2, tone_op2_env);
AudioConnection          patchCord74(ohat_op4, ohat_op4_env);
AudioConnection          patchCord75(ohat_op1, ohat_op1_env);
AudioConnection          patchCord76(tom_op4, tom_op4_env);
AudioConnection          patchCord77(tamb_op4, tamb_op4_env);
AudioConnection          patchCord78(chat_op1, chat_op1_env);
AudioConnection          patchCord79(kick_op5_env, 0, kick_mixer, 2);
AudioConnection          patchCord80(kick_op5_env, 0, kick_op6, 0);
AudioConnection          patchCord81(kick_op1_env, 0, kick_mixer, 0);
AudioConnection          patchCord82(kick_op3_env, 0, kick_mixer, 1);
AudioConnection          patchCord83(snre_op4_env, 0, snre_mixer, 1);
AudioConnection          patchCord84(tone_op2_env, 0, tone_op1, 0);
AudioConnection          patchCord85(snre_op1_env, 0, snre_mixer, 0);
AudioConnection          patchCord86(clap_mixer, 0, clap_op1, 0);
AudioConnection          patchCord87(tom_mixer, 0, tom_op1, 0);
AudioConnection          patchCord88(ohat_op4_env, 0, ohat_mixer, 1);
AudioConnection          patchCord89(tamb_mixer, 0, tamb_op1, 0);
AudioConnection          patchCord90(ohat_op1_env, 0, ohat_mixer, 0);
AudioConnection          patchCord91(tom_op4_env, 0, tom_mixer, 2);
AudioConnection          patchCord92(tamb_op4_env, 0, tamb_mixer, 2);
AudioConnection          patchCord93(tamb_op1, tamb_op1_env);
AudioConnection          patchCord94(chat_op1_env, 0, chat_filter, 0);
AudioConnection          patchCord95(kick_mixer, 0, mix1, 0);
AudioConnection          patchCord96(tone_op1, tone_op1_env);
AudioConnection          patchCord97(snre_mixer, 0, mix1, 1);
AudioConnection          patchCord98(tom_op1, tom_op1_env);
AudioConnection          patchCord99(ohat_mixer, 0, ohat_filter, 0);
AudioConnection          patchCord100(clap_op1, clap_op1_env);
AudioConnection          patchCord101(tamb_op1_env, 0, tamb_filter, 0);
AudioConnection          patchCord102(chat_filter, 2, mix1, 2);
AudioConnection          patchCord103(tone_op1_env, 0, mix2, 0);
AudioConnection          patchCord104(ohat_filter, 2, mix1, 3);
AudioConnection          patchCord105(tom_op1_env, 0, mix2, 3);
AudioConnection          patchCord106(clap_op1_env, 0, mix2, 1);
AudioConnection          patchCord107(tamb_filter, 2, mix2, 2);
AudioConnection          patchCord108(mix1, 0, master, 0);
AudioConnection          patchCord109(mix2, 0, master, 1);
AudioConnection          patchCord110(master, 0, i2s1, 0);
AudioConnection          patchCord111(master, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=2015.3334007263184,719.0833377838135
// GUItool: end automatically generated code


// IO objects
static LiquidCrystal_I2C lcd(0x27, 16, 2);
static RotaryEncoder encoder1(33, 34, RotaryEncoder::LatchMode::TWO03);
static RotaryEncoder encoder2(35, 36, RotaryEncoder::LatchMode::TWO03);
static RotaryEncoder encoder3(37, 38, RotaryEncoder::LatchMode::TWO03);
static RotaryEncoder encoder4(28, 27, RotaryEncoder::LatchMode::TWO03);
static RotaryEncoder encoder5(30, 29, RotaryEncoder::LatchMode::TWO03);
static RotaryEncoder encoderMenu(31, 32, RotaryEncoder::LatchMode::FOUR3);
static RotaryEncoder encoders[5] = {encoder1, encoder2, encoder3, encoder4, encoder5};

static int encoder1pos = 0;
static int encoder2pos = 0;
static int encoder3pos = 0;
static int encoder4pos = 0;
static int encoder5pos = 0;
static int encoderMenupos = 0;
static int encoderPositions[5] = {encoder1pos, encoder2pos, encoder3pos, encoder4pos, encoder5pos};

static String drums[] = {"KICK", "SNRE", "CHAT", "OHAT", "TONE", "CLAP", "TAMB", "TOM"};
static int currentDrumIndex = 0;
static int numOfDrums = 8;

static int indexOfEncoderToPoll;
static elapsedMillis encoderPollTimer;
static unsigned int encoderPollDelay;

static bool isMenuButtonPressed = false;

static RBD::Button menuButton(41, true);

// Parameters
static parameter kickParam1("PITCH           ", 50, 189);
static parameter kickParam2("DECAY           ", 20, 1750);
static parameter kickParam3("MOD AMPLITUDE   ", 0, 0.7);
static parameter kickParam4("MOD FREQUENCY   ", 0, 2);
static parameter kickParam5("VOLUME          ", 0, 1);
static parameter *kickParams[5] = {&kickParam1, &kickParam2, &kickParam3, &kickParam4, &kickParam5};

static parameter snreParam1("PITCH           ", 0.5, 2.5);
static parameter snreParam2("DECAY           ", 0.7, 1.9);
static parameter snreParam3("NOISE LENGTH    ", 15, 175);
static parameter snreParam4("NOISE AMPLITUDE ", 0, 0.8);
static parameter snreParam5("VOLUME          ", 0, 1);
static parameter *snreParams[5] = {&snreParam1, &snreParam2, &snreParam3, &snreParam4, &snreParam5};

static parameter cHatParam1("PITCH           ", 0.2, 1.8);
static parameter cHatParam2("DECAY           ", 0.2, 1.8);
static parameter cHatParam3("MOD FREQUENCY   ", 0.1, 1.9);
static parameter cHatParam4("MOD AMPLITUDE   ", 0, 0.95);
static parameter cHatParam5("VOLUME          ", 0, 1);
static parameter *cHatParams[5] = {&cHatParam1, &cHatParam2, &cHatParam3, &cHatParam4, &cHatParam5};

static parameter oHatParam1("PITCH           ", 1, 120);
static parameter oHatParam2("DECAY           ", 10, 350);
static parameter oHatParam3("MOD AMPLITUDE   ", 0, 0.8);
static parameter oHatParam4("MOD FREQUENCY   ", 0.3, 1.7);
static parameter oHatParam5("VOLUME          ", 0, 1);
static parameter *oHatParams[5] = {&oHatParam1, &oHatParam2, &oHatParam3, &oHatParam4, &oHatParam5};

static parameter toneParam1("OP 1 FREQUENCY  ", 20, 4320);
static parameter toneParam2("OP 1 DECAY      ", 10, 1200);
static parameter toneParam3("OP 2 FREQUENCY  ", 1, 210);
static parameter toneParam4("OP 2 AMPLITUDE  ", 0, 1);
static parameter toneParam5("VOLUME          ", 0, 1);
static parameter *toneParams[5] = {&toneParam1, &toneParam2, &toneParam3, &toneParam4, &toneParam5};

static parameter clapParam1("PITCH           ", 0.1, 1.5);
static parameter clapParam2("DECAY           ", 30, 300);
static parameter clapParam3("MOD FREQUENCY   ", 0.2, 1.8);
static parameter clapParam4("MOD AMPLITUDE   ", 0, 1);
static parameter clapParam5("VOLUME          ", 0, 1);
static parameter *clapParams[5] = {&clapParam1, &clapParam2, &clapParam3, &clapParam4, &clapParam5};

static parameter tambParam1("PITCH           ", 0.1, 6);
static parameter tambParam2("DECAY           ", 30, 250);
static parameter tambParam3("MOD FREQUENCY   ", 0.2, 1.8);
static parameter tambParam4("MOD AMPLITUDE   ", 0, 0.5);
static parameter tambParam5("VOLUME          ", 0, 1);
static parameter *tambParams[5] = {&tambParam1, &tambParam2, &tambParam3, &tambParam4, &tambParam5};

static parameter tomParam1("PITCH           ", 0.3, 1.5);
static parameter tomParam2("DECAY           ", 50, 450);
static parameter tomParam3("MOD FREQUENCY   ", 0.2, 1.8);
static parameter tomParam4("HIT AMPLITUDE   ", 0, 0.8);
static parameter tomParam5("VOLUME          ", 0, 1);
static parameter *tomParams[5] = {&tomParam1, &tomParam2, &tomParam3, &tomParam4, &tomParam5};


static parameter **params[8] = {kickParams, snreParams, cHatParams, oHatParams, toneParams, clapParams, tambParams, tomParams};

void initKick()
{
  kick_op1.begin(1, kickParams[0]->getValue() * 0.5, WAVEFORM_SINE);
  kick_op1_env.attack(0);
  kick_op1_env.hold(1);
  kick_op1_env.decay(kickParams[1]->getValue());
  kick_op1_env.sustain(0);

  kick_op2.amplitude(kickParams[2]->getValue());
  kick_op2.frequency(kickParams[0]->getValue() * 0.875 * kickParams[3]->getValue());
  kick_op2_env.attack(0);
  kick_op2_env.hold(2);
  kick_op2_env.decay(kickParams[1]->getValue() * 0.35);
  kick_op2_env.sustain(0);

  kick_op3.begin(1, kickParams[0]->getValue() * 1.5, WAVEFORM_SINE);
  kick_op3_env.attack(0);
  kick_op3_env.hold(2);
  kick_op3_env.decay(kickParams[1]->getValue() * 0.2);
  kick_op3_env.sustain(0);

  kick_op4.amplitude(kickParams[2]->getValue());
  kick_op4.frequency(kickParams[0]->getValue() * 0.75 * kickParams[3]->getValue());
  kick_op4_env.attack(0);
  kick_op4_env.hold(1);
  kick_op4_env.decay(5);
  kick_op4_env.sustain(0);

  kick_op5.begin(0.5, 57.544, WAVEFORM_SINE);
  kick_op5_env.attack(0);
  kick_op5_env.hold(1);
  kick_op5_env.decay(5);
  kick_op5_env.sustain(0);

  kick_op6.begin(1, 363.078, WAVEFORM_SINE);
  kick_op6_env.attack(1);
  kick_op6_env.hold(kickParams[1]->getValue());
  kick_op6_env.decay(2);
  kick_op6_env.sustain(0);

  mix1.gain(0, kickParams[4]->getValue());
}

void initSnar()
{
  snre_op1.begin(1, 204.174 * snreParams[0]->getValue(), WAVEFORM_SINE);
  snre_op1_env.attack(0);
  snre_op1_env.hold(0);
  snre_op1_env.decay(175 * snreParams[1]->getValue());
  snre_op1_env.sustain(0);

  snre_op2.amplitude(1);
  snre_op2.frequency(33.8844 * snreParams[0]->getValue());
  snre_op2_env.attack(0);
  snre_op2_env.hold(1);
  snre_op2_env.decay(10);
  snre_op2_env.sustain(0);

  snre_op3.amplitude(0.3);
  snre_op3.frequency(190.546 * snreParams[0]->getValue());
  snre_op3_env.attack(0);
  snre_op3_env.hold(0);
  snre_op3_env.decay(350 * snreParams[1]->getValue());
  snre_op3_env.sustain(0);

  snre_op4.begin(snreParams[3]->getValue(), 257.04 * snreParams[0]->getValue(), WAVEFORM_SINE);
  snre_op4_env.attack(0);
  snre_op4_env.hold(0);
  snre_op4_env.decay(snreParams[2]->getValue() * snreParams[1]->getValue());
  snre_op4_env.sustain(0);

  snre_op5.amplitude(0.75);
  snre_op5.frequency(250);
  snre_op5_env.attack(0);
  snre_op5_env.hold(1);
  snre_op5_env.decay(15);
  snre_op5_env.sustain(0);

  snre_op6.amplitude(1);
  snre_op6.frequency(5370.32);
  snre_op6_env.attack(0);
  snre_op6_env.hold(850);
  snre_op6_env.decay(1);
  snre_op6_env.sustain(0);

  mix1.gain(1, snreParams[4]->getValue());
}

void initChat()
{
  chat_op1.begin(WAVEFORM_SINE);
  chat_op1.amplitude(0.7);
  chat_op1.frequency(9120.11 * cHatParams[0]->getValue());
  chat_op1_env.attack(0);
  chat_op1_env.hold(0);
  chat_op1_env.decay(50 * cHatParams[1]->getValue());
  chat_op1_env.sustain(0);

  chat_op2.amplitude(cHatParams[3]->getValue());
  chat_op2.frequency(467.753 * cHatParams[2]->getValue());
  chat_op2_env.attack(0);
  chat_op2_env.hold(0);
  chat_op2_env.decay(500);
  chat_op2_env.sustain(0);

  chat_op3.begin(WAVEFORM_SINE);
  chat_op3.amplitude(0.2);
  chat_op3.frequency(661);
  chat_op3_env.attack(0);
  chat_op3_env.hold(500);
  chat_op3_env.decay(500);
  chat_op3_env.sustain(0);

  chat_op4.begin(WAVEFORM_SINE);
  chat_op4.amplitude(0.2);
  chat_op4.frequency(2454.71);
  chat_op4_env.attack(0);
  chat_op4_env.hold(500);
  chat_op4_env.decay(500);
  chat_op4_env.sustain(0);

  chat_op5.begin(WAVEFORM_SINE);
  chat_op5.amplitude(0.2);
  chat_op5.frequency(831.764);
  chat_op5_env.attack(0);
  chat_op5_env.hold(500);
  chat_op5_env.decay(100);
  chat_op5_env.sustain(0);

  chat_op6.amplitude(0.25);
  chat_op6.frequency(977.237);
  chat_op6_env.attack(0);
  chat_op6_env.hold(20);
  chat_op6_env.decay(20);
  chat_op6_env.sustain(0);

  mix1.gain(2, cHatParams[4]->getValue());
}

void initOhat()
{
  ohat_op1.begin(1, 278.0, WAVEFORM_SINE);
  ohat_op1_env.attack(2);
  ohat_op1_env.hold(0);
  ohat_op1_env.decay(5);
  ohat_op1_env.sustain(0);

  ohat_op2.amplitude(0.8);
  ohat_op2.frequency(371.535);
  ohat_op2_env.attack(0);
  ohat_op2_env.hold(100);
  ohat_op2_env.decay(100);
  ohat_op2_env.sustain(0);

  ohat_op3.amplitude(1);
  ohat_op3.frequency(1096.48);
  ohat_op3_env.attack(0);
  ohat_op3_env.hold(350);
  ohat_op3_env.decay(350);
  ohat_op3_env.sustain(0);

  ohat_op4.begin(0.5, oHatParams[0]->getValue(), WAVEFORM_SINE);
  ohat_op4_env.attack(0);
  ohat_op4_env.hold(0);
  ohat_op4_env.decay(oHatParams[1]->getValue());
  ohat_op4_env.sustain(0);

  ohat_op5.amplitude(oHatParams[2]->getValue());
  ohat_op5.frequency(977.237 * oHatParams[3]->getValue());
  ohat_op5_env.attack(0);
  ohat_op5_env.hold(80);
  ohat_op5_env.decay(350);
  ohat_op5_env.sustain(0);

  ohat_op6.amplitude(0.68);
  ohat_op6.frequency(7413);
  ohat_op6_env.attack(0);
  ohat_op6_env.hold(300);
  ohat_op6_env.decay(50);
  ohat_op6_env.sustain(0);

  mix1.gain(3, oHatParams[4]->getValue());
}

void initTone()
{
  tone_op1.begin(WAVEFORM_SINE);
  tone_op1.amplitude(0.8);
  tone_op1.frequency(toneParams[0]->getValue());
  tone_op1_env.attack(0);
  tone_op1_env.hold(0);
  tone_op1_env.decay(toneParams[1]->getValue());
  tone_op1_env.sustain(0);

  tone_op2.amplitude(toneParams[3]->getValue());
  tone_op2.frequency(toneParams[2]->getValue());
  tone_op2_env.attack(0);
  tone_op2_env.hold(5000);
  tone_op2_env.decay(500);
  tone_op2_env.sustain(0);

  mix2.gain(0, toneParams[4]->getValue());
}

void initClap()
{
  clap_op1.begin(0.8, 5248.07 * clapParams[0]->getValue(), WAVEFORM_SINE);
  clap_op1_env.attack(2);
  clap_op1_env.hold(0);
  clap_op1_env.decay(clapParams[1]->getValue());
  clap_op1_env.sustain(0);

  clap_op2.amplitude(0.2);
  clap_op2.frequency(3467.37);
  clap_op2_env.attack(0);
  clap_op2_env.hold(0);
  clap_op2_env.decay(150);
  clap_op2_env.sustain(0);

  clap_op3.begin(WAVEFORM_SINE);
  clap_op3.amplitude(0.5);
  clap_op3.frequency(6);
  clap_op3_env.attack(0);
  clap_op3_env.hold(0);
  clap_op3_env.decay(100);
  clap_op3_env.sustain(0);

  clap_op4.amplitude(clapParams[2]->getValue());
  clap_op4.frequency(10);
  clap_op4_env.attack(0);
  clap_op4_env.hold(0);
  clap_op4_env.decay(400);
  clap_op4_env.sustain(0);

  clap_op5.begin(WAVEFORM_SINE);
  clap_op5.amplitude(0.3);
  clap_op5.frequency(27 * clapParams[2]->getValue());
  clap_op5_env.attack(0);
  clap_op5_env.hold(15);
  clap_op5_env.decay(250);
  clap_op5_env.sustain(0);

  clap_op6.begin(WAVEFORM_SINE);
  clap_op6.amplitude(0.5);
  clap_op6.frequency(120);
  clap_op6_env.attack(0);
  clap_op6_env.hold(30);
  clap_op6_env.decay(500);
  clap_op6_env.sustain(0);

  mix2.gain(1, clapParams[4]->getValue());
}

void initTamb()
{
  tamb_op1.begin(0.7, 6165.95*tambParams[0]->getValue(), WAVEFORM_SINE);
  tamb_op1_env.attack(2);
  tamb_op1_env.hold(0);
  tamb_op1_env.decay(tambParams[1]->getValue());
  tamb_op1_env.sustain(0);

  tamb_op2.amplitude(0.4);
  tamb_op2.frequency(17.378 * tambParams[2]->getValue());
  tamb_op2_env.attack(0);
  tamb_op2_env.hold(5000);
  tamb_op2_env.decay(150);
  tamb_op2_env.sustain(0);

  tamb_op3.begin(WAVEFORM_SINE);
  tamb_op3.amplitude(0.2);
  tamb_op3.frequency(8709.64);
  tamb_op3_env.attack(0);
  tamb_op3_env.hold(0);
  tamb_op3_env.decay(140);
  tamb_op3_env.sustain(0);

  tamb_op4.amplitude(tambParams[3]->getValue());
  tamb_op4.frequency(112.202);
  tamb_op4_env.attack(0);
  tamb_op4_env.hold(5000);
  tamb_op4_env.decay(400);
  tamb_op4_env.sustain(0);

  tamb_op5.begin(WAVEFORM_SINE);
  tamb_op5.amplitude(0.08);
  tamb_op5.frequency(812.831);
  tamb_op5_env.attack(0);
  tamb_op5_env.hold(5000);
  tamb_op5_env.decay(250);
  tamb_op5_env.sustain(0);

  tamb_op6.amplitude(0.15);
  tamb_op6.frequency(1000);
  tamb_op6_env.attack(2);
  tamb_op6_env.hold(3000);
  tamb_op6_env.decay(500);
  tamb_op6_env.sustain(0);

  mix2.gain(2, tambParams[4]->getValue());
}

void initTom()
{
  tom_op1.begin(0.6, 300*tomParams[0]->getValue(), WAVEFORM_SINE);
  tom_op1_env.attack(0);
  tom_op1_env.hold(0);
  tom_op1_env.decay(tomParams[1]->getValue());
  tom_op1_env.sustain(0);

  tom_op2.amplitude(1);
  tom_op2.frequency(170);
  tom_op2_env.attack(0);
  tom_op2_env.hold(0);
  tom_op2_env.decay(2);
  tom_op2_env.sustain(0);

  tom_op3.begin(WAVEFORM_SINE);
  tom_op3.amplitude(0.6);
  tom_op3.frequency(200*tomParams[2]->getValue());
  tom_op3_env.attack(0);
  tom_op3_env.hold(2);
  tom_op3_env.decay(0);
  tom_op3_env.sustain(0);

  tom_op4.amplitude(0.4);
  tom_op4.frequency(112.202);
  tom_op4_env.attack(0);
  tom_op4_env.hold(0);
  tom_op4_env.decay(3);
  tom_op4_env.sustain(0);

  tom_op5.begin(WAVEFORM_SINE);
  tom_op5.amplitude(0.8);
  tom_op5.frequency(150);
  tom_op5_env.attack(0);
  tom_op5_env.hold(0);
  tom_op5_env.decay(350);
  tom_op5_env.sustain(0);

  tom_op6.amplitude(tomParams[3]->getValue());
  tom_op6.frequency(300);
  tom_op6_env.attack(0);
  tom_op6_env.hold(3000);
  tom_op6_env.decay(500);
  tom_op6_env.sustain(0);

  mix2.gain(3, tomParams[4]->getValue());
}

void updateKickParam(int i)
{
  switch (i)
  {
  case 0:
    kick_op1.frequency(kickParams[0]->getValue() * 0.5);
    kick_op2.frequency(kickParams[0]->getValue() * 0.875 * kickParams[3]->getValue());
    kick_op3.frequency(kickParams[0]->getValue() * 1.5);
    kick_op4.frequency(kickParams[0]->getValue() * 0.75 * kickParams[3]->getValue());
    break;
  case 1:
    kick_op1_env.decay(kickParams[1]->getValue());
    kick_op2_env.decay(kickParams[1]->getValue() * 0.35);
    kick_op3_env.decay(kickParams[1]->getValue() * 0.2);
    kick_op6_env.hold(kickParams[1]->getValue());
    break;
  case 2:
    kick_op2.amplitude(kickParams[2]->getValue());
    kick_op4.amplitude(kickParams[2]->getValue());
    break;
  case 3:
    kick_op2.frequency(kickParams[0]->getValue() * 0.875 * kickParams[3]->getValue());
    kick_op4.frequency(kickParams[0]->getValue() * 0.75 * kickParams[3]->getValue());
    break;
  case 4:
    mix1.gain(0, kickParams[4]->getValue());
    break;
  }
}

void updateSnreParam(int i)
{
  switch (i)
  {
  case 0:
    snre_op1.frequency(204.174 * snreParams[0]->getValue());
    snre_op2.frequency(33.8844 * snreParams[0]->getValue());
    snre_op3.frequency(190.546 * snreParams[0]->getValue());
    snre_op4.frequency(257.04 * snreParams[0]->getValue());
    break;
  case 1:
    snre_op1_env.decay(175 * snreParams[1]->getValue());
    snre_op3_env.decay(350 * snreParams[1]->getValue());
    snre_op4_env.decay(snreParams[2]->getValue() * snreParams[1]->getValue());
    break;
  case 2:
    snre_op4_env.decay(snreParams[2]->getValue() * snreParams[1]->getValue());
    break;
  case 3:
    snre_op4.amplitude(snreParams[3]->getValue());
    break;
  case 4:
    mix1.gain(1, snreParams[4]->getValue());
    break;
  }
}

void updateChatParam(int i)
{
  switch (i)
  {
  case 0:
    chat_op1.frequency(9120.11 * cHatParams[0]->getValue());
    break;
  case 1:
    chat_op1_env.decay(50 * cHatParams[1]->getValue());
    break;
  case 2:
    chat_op2.frequency(467.753 * cHatParams[2]->getValue());
    break;
  case 3:
    chat_op2.amplitude(cHatParams[3]->getValue());
    break;
  case 4:
    mix1.gain(2, cHatParams[4]->getValue());
    break;
  }
}

void updateOhatParam(int i)
{
  switch (i)
  {
  case 0:
    ohat_op4.frequency(oHatParams[0]->getValue());
    break;
  case 1:
    ohat_op4_env.decay(oHatParams[1]->getValue());
    break;
  case 2:
    ohat_op5.amplitude(oHatParams[2]->getValue());
    break;
  case 3:
    ohat_op5.frequency(977.237 * oHatParams[3]->getValue());
    break;
  case 4:
    mix1.gain(3, oHatParams[4]->getValue());
    break;
  }
}

void updateToneParam(int i)
{
  switch (i)
  {
  case 0:
    tone_op1.frequency(toneParams[0]->getValue());
    break;
  case 1:
    tone_op1_env.decay(toneParams[1]->getValue());
    break;
  case 2:
    tone_op2.frequency(toneParams[2]->getValue());
    break;
  case 3:
    tone_op2.amplitude(toneParams[3]->getValue());
    break;
  case 4:
    mix2.gain(0, toneParams[4]->getValue());
    break;
  }
}

void updateClapParam(int i)
{
  switch (i)
  {
  case 0:
    clap_op1.frequency(5248.07 * clapParams[0]->getValue());
    break;
  case 1:
    clap_op1_env.decay(clapParams[1]->getValue());
    break;
  case 2:
    clap_op5.frequency(27 * clapParams[2]->getValue());
    break;
  case 3:
    clap_op4.amplitude(clapParams[2]->getValue());
    break;
  case 4:
    mix2.gain(1, clapParams[4]->getValue());
    break;
  }
}

void updateTambParam(int i)
{
  switch (i)
  {
  case 0:
    tamb_op1.frequency(6165.95 * tambParams[0]->getValue());
    break;
  case 1:
    tamb_op1_env.decay(tambParams[1]->getValue());
    break;
  case 2:
    tamb_op2.frequency(17.378 * tambParams[2]->getValue());
    break;
  case 3:
    tamb_op4.amplitude(tambParams[3]->getValue());
    break;
  case 4:
    mix2.gain(2, tambParams[4]->getValue());
    break;
  }  
}

void updateTomParam(int i)
{
    switch (i)
  {
  case 0:
    tom_op1.frequency(300*tomParams[0]->getValue());
    break;
  case 1:
    tom_op1_env.decay(tomParams[1]->getValue());
    break;
  case 2:
    tom_op3.frequency(200*tomParams[2]->getValue());
    break;
  case 3:
    tom_op6.amplitude(tomParams[3]->getValue());
    break;
  case 4:
    mix2.gain(3, tomParams[4]->getValue());
    break;
  }
}

void pollMenuEncoder()
{
  encoderMenu.tick();
  int newPos = encoderMenu.getPosition();
  if (newPos != encoderMenupos)
  {
    encoderMenupos = newPos;
    if ((int)encoderMenu.getDirection() == 1)
    {
      currentDrumIndex++;
      if (currentDrumIndex > numOfDrums - 1)
      {
        currentDrumIndex = 0;
      }
    }
    else
    {
      currentDrumIndex--;
      if (currentDrumIndex < 0)
      {
        currentDrumIndex = numOfDrums - 1;
      }
    }

    lcd.clear();
    lcd.setCursor(12, 0);
    lcd.print(drums[currentDrumIndex]);
  }
}

void pollEncoders(int i)
{

  encoders[i].tick();
  int newPos = encoders[i].getPosition();
  if (newPos != encoderPositions[i])
  {
    encoderPositions[i] = newPos;

    if ((int)encoders[i].getDirection() == 1)
    {
      if (!isMenuButtonPressed)
      {
        params[currentDrumIndex][i]->increment();
      }
      else
      {
        params[currentDrumIndex][i]->increment8Times();
      }
    }
    else
    {
      if (!isMenuButtonPressed)
      {
        params[currentDrumIndex][i]->decrement();
      }
      else
      {
        params[currentDrumIndex][i]->decrement8Times();
      }
    }

    switch (currentDrumIndex)
    {
    case 0:
      updateKickParam(i);
      break;
    case 1:
      updateSnreParam(i);
      break;
    case 2:
      updateChatParam(i);
      break;
    case 3:
      updateOhatParam(i);
      break;
    case 4:
      updateToneParam(i);
      break;
    case 5:
      updateClapParam(i);
      break;
    case 6:
      updateTambParam(i);
      break;
    case 7:
      updateTomParam(i);
      break;
    }

    lcd.setCursor(0, 1);
    lcd.print(params[currentDrumIndex][i]->getName());
    lcd.setCursor(0, 0);
    char stepValueToPrint[3];
    sprintf(stepValueToPrint, "%03d", params[currentDrumIndex][i]->getCurrentStep());
    lcd.print(stepValueToPrint);
  }
}

void noteOnHandler(byte channel, byte note, byte velocity)
{
  switch (note)
  {
  case 0X48:
    kick_op1_env.noteOn();
    kick_op2.phase(180);
    kick_op2_env.noteOn();
    kick_op3_env.noteOn();
    kick_op4.phase(180);
    kick_op4_env.noteOn();
    kick_op5_env.noteOn();
    kick_op6_env.noteOn();
    break;
  case 0X49:
    snre_op1_env.noteOn();
    snre_op2_env.noteOn();
    snre_op3.phase(0);
    snre_op3_env.noteOn();
    snre_op4_env.noteOn();
    snre_op5.phase(0);
    snre_op5_env.noteOn();
    snre_op6_env.noteOn();
    break;
  case 0X4A:
    chat_op1_env.noteOn();
    chat_op2_env.noteOn();
    chat_op3_env.noteOn();
    chat_op4_env.noteOn();
    chat_op5_env.noteOn();
    chat_op6_env.noteOn();
    break;
  case 0X4B:
    ohat_op1_env.noteOn();
    ohat_op2_env.noteOn();
    ohat_op3.phase(0);
    ohat_op3_env.noteOn();
    ohat_op4_env.noteOn();
    ohat_op5.phase(0);
    ohat_op5_env.noteOn();
    ohat_op6_env.noteOn();
    break;
  case 0X4C:
    tone_op1_env.noteOn();
    tone_op2.phase(0);
    tone_op2_env.noteOn();
    break;
  case 0X4D:
    clap_op1_env.noteOn();
    clap_op2.phase(0);
    clap_op2_env.noteOn();
    clap_op3_env.noteOn();
    clap_op4.phase(0);
    clap_op4_env.noteOn();
    clap_op5_env.noteOn();
    clap_op6_env.noteOn();
  case 0X4E:
    tamb_op1_env.noteOn();
    tamb_op2.phase(0);
    tamb_op2_env.noteOn();
    tamb_op3_env.noteOn();
    tamb_op4_env.noteOn();
    tamb_op5_env.noteOn();
    tamb_op6.phase(0);
    tamb_op6_env.noteOn();
    break;
  case 0X4F:
    tom_op1_env.noteOn();
    tom_op2.phase(0);
    tom_op2_env.noteOn();
    tom_op3_env.noteOn();
    tom_op4_env.noteOn();
    tom_op5_env.noteOn();
    tom_op6.phase(0);
    tom_op6_env.noteOn();
    break;
  }
}

void thread_MIDIREAD()
{
  while (1)
  {
    usbMIDI.read();
  }
}

void setup()
{
  indexOfEncoderToPoll = 0;

  // 5 ms delay for polling encoders
  encoderPollDelay = 1;
  encoderPollTimer = 0;

  // Init LCD
  lcd.init();
  delay(150);
  lcd.backlight();
  lcd.setCursor(5, 0);
  lcd.print("FMDRUM");
  delay(1500);
  lcd.clear();
  lcd.setCursor(12, 0);
  lcd.print(drums[currentDrumIndex]);

  AudioMemory(60);
  sgtl5000_1.enable();
  sgtl5000_1.volume(0.5);

  chat_filter.frequency(895);
  ohat_filter.frequency(1500);
  tamb_filter.frequency(2350);

  initKick();
  initSnar();
  initChat();
  initOhat();
  initTone();
  initClap();
  initTamb();
  initTom();

  usbMIDI.setHandleNoteOn(noteOnHandler);

  threads.addThread(thread_MIDIREAD);
}

void loop()
{
  if (encoderPollTimer > encoderPollDelay)
  {
    pollMenuEncoder();
    encoderPollTimer = 0;
    pollEncoders(indexOfEncoderToPoll);
    indexOfEncoderToPoll++;

    if (indexOfEncoderToPoll == 5)
    {
      indexOfEncoderToPoll = 0;
    }

    if (menuButton.onPressed())
    {
      isMenuButtonPressed = true;
    }
    if (menuButton.onReleased())
    {
      isMenuButtonPressed = false;
    }
  }
}