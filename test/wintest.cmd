rem RWP*Load Simulator
rem
rem Copyright (c) 2024 Oracle Corporation
rem Licensed under the Universal Permissive License v 1.0
rem as shown at https://oss.oracle.com/licenses/upl/
rem
rem Run the various tests on windows
rem
rem NOTE NOTE
rem =========
rem This is only a very premature version of a test
rem to be executed in a Windows environment. There
rem are many issues that ought to be resolved, including
rem many tests that depend on a Linux environment.
rem
rem If executed, the output must be manually checked
rem
rem History
rem
rem bengsig  29-feb-2024  Creation
rem

rwloadsim -q 1.rwl > winres\1.out 2> winres\1.err
fc winres\1.out testres\1.out.good
fc winres\1.err testres\1.err.good

rwloadsim -q 2.rwl > winres\2.out 2> winres\2.err
fc winres\2.out testres\2.out.good
fc winres\2.err testres\2.err.good

rwloadsim -q 3.rwl > winres\3.out 2> winres\3.err
fc winres\3.out testres\3.out.good
fc winres\3.err testres\3.err.good

rwloadsim -q 4.rwl > winres\4.out 2> winres\4.err
fc winres\4.out testres\4.out.good
fc winres\4.err testres\4.err.good

rwloadsim -q 5.rwl > winres\5.out 2> winres\5.err
fc winres\5.out testres\5.out.good
fc winres\5.err testres\5.err.good

rwloadsim -q 6.rwl > winres\6.out 2> winres\6.err
fc winres\6.out testres\6.out.good
fc winres\6.err testres\6.err.good

rwloadsim -q 7.rwl > winres\7.out 2> winres\7.err
fc winres\7.out testres\7.out.good
fc winres\7.err testres\7.err.good

rwloadsim -q --integer max:=1234 8.rwl > winres\8.out 2> winres\8.err
fc winres\8.out testres\8.out.good
fc winres\8.err testres\8.err.good

rwloadsim -q 9.rwl > winres\9.out 2> winres\9.err
fc winres\9.out testres\9.out.good
fc winres\9.err testres\9.err.good

rwloadsim -q 10.rwl > winres\10.out 2> winres\10.err
fc winres\10.out testres\10.out.good
fc winres\10.err testres\10.err.good

rwloadsim -q 11.rwl > winres\11.out 2> winres\11.err
fc winres\11.out testres\11.out.good
fc winres\11.err testres\11.err.good

rwloadsim -q 12.rwl > winres\12.out 2> winres\12.err
fc winres\12.out testres\12.out.good
fc winres\12.err testres\12.err.good

rwloadsim -q rwlrand.rwl 13.rwl > winres\13.out 2> winres\13.err
fc winres\13.out testres\13.out.good
fc winres\13.err testres\13.err.good

rwloadsim -q -q -i max:=100000 -D 0x0 rwlrand.rwl 13.rwl > winres\13.out 2> winres\13.err
fc winres\13.out testres\13.out.good
fc winres\13.err testres\13.err.good

rwloadsim -q rwlrand.rwl 14.rwl > winres\14.out 2> winres\14.err
fc winres\14.out testres\14.out.good
fc winres\14.err testres\14.err.good

rwloadsim -q rwlrand.rwl 15.rwl > winres\15.out 2> winres\15.err
fc winres\15.out testres\15.out.good
fc winres\15.err testres\15.err.good

rwloadsim -q 16.rwl > winres\16.out 2> winres\16.err
fc winres\16.out testres\16.out.good
fc winres\16.err testres\16.err.good

rwloadsim -q rwlrand.rwl 17.rwl > winres\17.out 2> winres\17.err
fc winres\17.out testres\17.out.good
fc winres\17.err testres\17.err.good

rwloadsim -q rwlrand.rwl 18.rwl > winres\18.out 2> winres\18.err
fc winres\18.out testres\18.out.good
fc winres\18.err testres\18.err.good

rwloadsim -q -q -i max:=100000 -D 0x0 rwlrand.rwl 18.rwl > winres\18.out 2> winres\18.err
fc winres\18.out testres\18.out.good
fc winres\18.err testres\18.err.good

rwloadsim -q rwlrand.rwl 19.rwl > winres\19.out 2> winres\19.err
fc winres\19.out testres\19.out.good
fc winres\19.err testres\19.err.good

rwloadsim -q -q -i max:=100000 -D 0x0 rwlrand.rwl 19.rwl > winres\19.out 2> winres\19.err
fc winres\19.out testres\19.out.good
fc winres\19.err testres\19.err.good

rwloadsim -q -c 0.1 testuserinfo.rwl testdefault.rwl 20.rwl > winres\20.out 2> winres\20.err
fc winres\20.out testres\20.out.good
fc winres\20.err testres\20.err.good

rwloadsim -q -c 0.1 testuserinfo.rwl testdefault.rwl 21.rwl > winres\21.out 2> winres\21.err
fc winres\21.out testres\21.out.good
fc winres\21.err testres\21.err.good

rwloadsim -q -c 0.1 testuserinfo.rwl testdefault.rwl 22.rwl > winres\22.out 2> winres\22.err
fc winres\22.out testres\22.out.good
fc winres\22.err testres\22.err.good

rwloadsim -q 23.rwl > winres\23.out 2> winres\23.err
fc winres\23.out testres\23.out.good
fc winres\23.err testres\23.err.good

rwloadsim -q -c 0.1 testuserinfo.rwl testdefault.rwl testpool.rwl 24.rwl > winres\24.out 2> winres\24.err
fc winres\24.out testres\24.out.good
fc winres\24.err testres\24.err.good

rwloadsim -q -c 0.1 testuserinfo.rwl testdefault.rwl testpool.rwl 25.rwl > winres\25.out 2> winres\25.err
fc winres\25.out testres\25.out.good
fc winres\25.err testres\25.err.good

rwloadsim -q -c 0.1 testuserinfo.rwl testdefault.rwl testpool.rwl 26.rwl > winres\26.out 2> winres\26.err
fc winres\26.out testres\26.out.good
fc winres\26.err testres\26.err.good

rwloadsim -q 27.rwl > winres\27.out 2> winres\27.err
fc winres\27.out testres\27.out.good
fc winres\27.err testres\27.err.good

rwloadsim -q rwlrand.rwl 28.rwl > winres\28.out 2> winres\28.err
fc winres\28.out testres\28.out.good
fc winres\28.err testres\28.err.good

rwloadsim -q rwlrand.rwl 29.rwl > winres\29.out 2> winres\29.err
fc winres\29.out testres\29.out.good
fc winres\29.err testres\29.err.good

rwloadsim -q 30.rwl > winres\30.out 2> winres\30.err
fc winres\30.out testres\30.out.good
fc winres\30.err testres\30.err.good

rwloadsim -q -c 0.1 31.rwl > winres\31.out 2> winres\31.err
fc winres\31.out testres\31.out.good
fc winres\31.err testres\31.err.good

rwloadsim -q 32.rwl > winres\32.out 2> winres\32.err
fc winres\32.out testres\32.out.good
fc winres\32.err testres\32.err.good

rwloadsim -q 33.rwl > winres\33.out 2> winres\33.err
fc winres\33.out testres\33.out.good
fc winres\33.err testres\33.err.good

rwloadsim -q -c 0.1 testuserinfo.rwl testdefault.rwl testpool.rwl 34.rwl > winres\34.out 2> winres\34.err
fc winres\34.out testres\34.out.good
fc winres\34.err testres\34.err.good

rwloadsim -q -c 0.1 testuserinfo.rwl testdefault.rwl testpool.rwl 35.rwl > winres\35.out 2> winres\35.err
fc winres\35.out testres\35.out.good
fc winres\35.err testres\35.err.good

rwloadsim -q rwlrand.rwl 36.rwl > winres\36.out 2> winres\36.err
fc winres\36.out testres\36.out.good
fc winres\36.err testres\36.err.good

rwloadsim -q -c 0.1 37.rwl > winres\37.out 2> winres\37.err
fc winres\37.out testres\37.out.good
fc winres\37.err testres\37.err.good

rwloadsim -q -c 0.1 testuserinfo.rwl testpool.rwl 38.rwl > winres\38.out 2> winres\38.err
fc winres\38.out testres\38.out.good
fc winres\38.err testres\38.err.good

rwloadsim -q -c 0.1 testuserinfo.rwl testdefault.rwl testpool.rwl 39.rwl > winres\39.out 2> winres\39.err
fc winres\39.out testres\39.out.good
fc winres\39.err testres\39.err.good

rwloadsim -q -c 0.1 testuserinfo.rwl testdefault.rwl testpool.rwl 40.rwl > winres\40.out 2> winres\40.err
fc winres\40.out testres\40.out.good
fc winres\40.err testres\40.err.good

rwloadsim -q -c 0.1 testuserinfo.rwl testdefault.rwl 41.rwl > winres\41.out 2> winres\41.err
fc winres\41.out testres\41.out.good
fc winres\41.err testres\41.err.good

rwloadsim -q -c 0.1 testuserinfo.rwl testdefault.rwl testdrcp.rwl 42.rwl > winres\42.out 2> winres\42.err
fc winres\42.out testres\42.out.good
fc winres\42.err testres\42.err.good

rwloadsim -q -sss -K TestRun -c 3.0 testuserinfo.rwl testpool.rwl testresults.rwl 43.rwl > winres\43.out 2> winres\43.err
fc winres\43.out testres\43.out.good
fc winres\43.err testres\43.err.good

rwloadsim -q -c 0.1 testuserinfo.rwl testdefault.rwl testpool.rwl testsystem.rwl 44.rwl > winres\44.out 2> winres\44.err
fc winres\44.out testres\44.out.good
fc winres\44.err testres\44.err.good

rwloadsim -q 45.rwl > winres\45.out 2> winres\45.err
fc winres\45.out testres\45.out.good
fc winres\45.err testres\45.err.good

rwloadsim -q 46.rwl > winres\46.out 2> winres\46.err
fc winres\46.out testres\46.out.good
fc winres\46.err testres\46.err.good

rwloadsim -q 47.rwl > winres\47.out 2> winres\47.err
fc winres\47.out testres\47.out.good
fc winres\47.err testres\47.err.good

rwloadsim -q -c 0.1 48.rwl > winres\48.out 2> winres\48.err
fc winres\48.out testres\48.out.good
fc winres\48.err testres\48.err.good

rwloadsim -q -c 0.1 testuserinfo.rwl testthrded.rwl 49.rwl > winres\49.out 2> winres\49.err
fc winres\49.out testres\49.out.good
fc winres\49.err testres\49.err.good

rwloadsim -q 50.rwl > winres\50.out 2> winres\50.err
fc winres\50.out testres\50.out.good
fc winres\50.err testres\50.err.good

rwloadsim -q 51.rwl > winres\51.out 2> winres\51.err
fc winres\51.out testres\51.out.good
fc winres\51.err testres\51.err.good

rwloadsim -q -c 0.1 52.rwl > winres\52.out 2> winres\52.err
fc winres\52.out testres\52.out.good
fc winres\52.err testres\52.err.good

rwloadsim -q 53.rwl > winres\53.out 2> winres\53.err
fc winres\53.out testres\53.out.good
fc winres\53.err testres\53.err.good

rwloadsim -q 54.rwl > winres\54.out 2> winres\54.err
fc winres\54.out testres\54.out.good
fc winres\54.err testres\54.err.good

rwloadsim -q 55.rwl > winres\55.out 2> winres\55.err
fc winres\55.out testres\55.out.good
fc winres\55.err testres\55.err.good

rwloadsim -q 56.rwl > winres\56.out 2> winres\56.err
fc winres\56.out testres\56.out.good
fc winres\56.err testres\56.err.good

rwloadsim -q -D eval 57.rwl > winres\57.out 2> winres\57.err
fc winres\57.out testres\57.out.good
fc winres\57.err testres\57.err.good

rwloadsim -q 58.rwl > winres\58.out 2> winres\58.err
fc winres\58.out testres\58.out.good
fc winres\58.err testres\58.err.good

rwloadsim -q 59.rwl > winres\59.out 2> winres\59.err
fc winres\59.out testres\59.out.good
fc winres\59.err testres\59.err.good

rwloadsim -q -c 0.1 60.rwl > winres\60.out 2> winres\60.err
fc winres\60.out testres\60.out.good
fc winres\60.err testres\60.err.good

rwloadsim -q -c 0.1 61.rwl > winres\61.out 2> winres\61.err
fc winres\61.out testres\61.out.good
fc winres\61.err testres\61.err.good

rwloadsim -q -sss -K TestRun -c 0.1 testuserinfo.rwl testpool.rwl testresults.rwl 62.rwl > winres\62.out 2> winres\62.err
fc winres\62.out testres\62.out.good
fc winres\62.err testres\62.err.good

rwloadsim -q 63.rwl > winres\63.out 2> winres\63.err
fc winres\63.out testres\63.out.good
fc winres\63.err testres\63.err.good

rwloadsim -q 64.rwl > winres\64.out 2> winres\64.err
fc winres\64.out testres\64.out.good
fc winres\64.err testres\64.err.good

rwloadsim -q -c 0.1 testuserinfo.rwl testpool.rwl 65.rwl > winres\65.out 2> winres\65.err
fc winres\65.out testres\65.out.good
fc winres\65.err testres\65.err.good

rwloadsim -q -c 0.1 testuserinfo.rwl testdefault.rwl testpool.rwl 66.rwl > winres\66.out 2> winres\66.err
fc winres\66.out testres\66.out.good
fc winres\66.err testres\66.err.good

rwloadsim -q 67.rwl > winres\67.out 2> winres\67.err
fc winres\67.out testres\67.out.good
fc winres\67.err testres\67.err.good

rwloadsim -q -c 0.1 testuserinfo.rwl testdefault.rwl 68.rwl > winres\68.out 2> winres\68.err
fc winres\68.out testres\68.out.good
fc winres\68.err testres\68.err.good

rwloadsim -q -c 0.1 testuserinfo.rwl testdefault.rwl 69.rwl > winres\69.out 2> winres\69.err
fc winres\69.out testres\69.out.good
fc winres\69.err testres\69.err.good

rwloadsim -q --double pi:=3.14159 70.rwl 70-2.rwl 70-3.rwl 70-4.rwl 70-5.rwl 70-6.rwl > winres\70-6.out 2> winres\70-6.err
fc winres\70-6.out testres\70-6.out.good
fc winres\70-6.err testres\70-6.err.good

rwloadsim -q testuserinfo.rwl testdefault.rwl 71.rwl 71-2.rwl > winres\71-2.out 2> winres\71-2.err
fc winres\71-2.out testres\71-2.out.good
fc winres\71-2.err testres\71-2.err.good

rwloadsim -q -c 0.1 testuserinfo.rwl testdefault.rwl 72.rwl > winres\72.out 2> winres\72.err
fc winres\72.out testres\72.out.good
fc winres\72.err testres\72.err.good

rwloadsim -q 73.rwl > winres\73.out 2> winres\73.err
fc winres\73.out testres\73.out.good
fc winres\73.err testres\73.err.good

rwloadsim -q -c 0.1 testuserinfo.rwl testdefault.rwl 74.rwl > winres\74.out 2> winres\74.err
fc winres\74.out testres\74.out.good
fc winres\74.err testres\74.err.good

rwloadsim -q 75.rwl > winres\75.out 2> winres\75.err
fc winres\75.out testres\75.out.good
fc winres\75.err testres\75.err.good

rwloadsim -q -c 0.1 testuserinfo.rwl testdefault.rwl 76.rwl > winres\76.out 2> winres\76.err
fc winres\76.out testres\76.out.good
fc winres\76.err testres\76.err.good

rwloadsim -q 77.rwl > winres\77.out 2> winres\77.err
fc winres\77.out testres\77.out.good
fc winres\77.err testres\77.err.good

rwloadsim -q 78.rwl > winres\78.out 2> winres\78.err
fc winres\78.out testres\78.out.good
fc winres\78.err testres\78.err.good

rwloadsim -q -c 0.1 79.rwl > winres\79.out 2> winres\79.err
fc winres\79.out testres\79.out.good
fc winres\79.err testres\79.err.good

rwloadsim -q -sss -K TestRun -c 3.0 testuserinfo.rwl testpool.rwl testresults.rwl 80.rwl > winres\80.out 2> winres\80.err
fc winres\80.out testres\80.out.good
fc winres\80.err testres\80.err.good

rwloadsim -q -c 0.1 testuserinfo.rwl testdefault.rwl 81.rwl > winres\81.out 2> winres\81.err
fc winres\81.out testres\81.out.good
fc winres\81.err testres\81.err.good

rwloadsim -q -sss -K TestRun -c 0.1 testuserinfo.rwl testdefault.rwl testresults.rwl 82.rwl > winres\82.out 2> winres\82.err
fc winres\82.out testres\82.out.good
fc winres\82.err testres\82.err.good

rwloadsim -q -sss -K TestRun -c 0.1 testuserinfo.rwl testpool.rwl testresults.rwl 83.rwl > winres\83.out 2> winres\83.err
fc winres\83.out testres\83.out.good
fc winres\83.err testres\83.err.good

rwloadsim -q -sss -K TestRun -c 0.1 testuserinfo.rwl testdefault.rwl testresults.rwl 84.rwl > winres\84.out 2> winres\84.err
fc winres\84.out testres\84.out.good
fc winres\84.err testres\84.err.good

rwloadsim -q 85.rwl > winres\85.out 2> winres\85.err
fc winres\85.out testres\85.out.good
fc winres\85.err testres\85.err.good

rwloadsim -q -sss -K TestRun -c 0.1 testuserinfo.rwl testdefault.rwl testresults.rwl 86.rwl > winres\86.out 2> winres\86.err
fc winres\86.out testres\86.out.good
fc winres\86.err testres\86.err.good

rwloadsim -q -c 0.1 testuserinfo.rwl testdefault.rwl testpool.rwl 87.rwl > winres\87.out 2> winres\87.err
fc winres\87.out testres\87.out.good
fc winres\87.err testres\87.err.good

rwloadsim -q -c 0.1 testuserinfo.rwl testdefault.rwl 88.rwl > winres\88.out 2> winres\88.err
fc winres\88.out testres\88.out.good
fc winres\88.err testres\88.err.good

rwloadsim -q 89.rwl > winres\89.out 2> winres\89.err
fc winres\89.out testres\89.out.good
fc winres\89.err testres\89.err.good

rwloadsim -q --histograms --persec --comment TestRun --clockstart 0.1 90.rwl > winres\90.out 2> winres\90.err
fc winres\90.out testres\90.out.good
fc winres\90.err testres\90.err.good

rwloadsim -q 91.rwl > winres\91.out 2> winres\91.err
fc winres\91.out testres\91.out.good
fc winres\91.err testres\91.err.good

rwloadsim -q 92.rwl > winres\92.out 2> winres\92.err
fc winres\92.out testres\92.out.good
fc winres\92.err testres\92.err.good

rwloadsim -q 93.rwl > winres\93.out 2> winres\93.err
fc winres\93.out testres\93.out.good
fc winres\93.err testres\93.err.good

rwloadsim -q 94.rwl > winres\94.out 2> winres\94.err
fc winres\94.out testres\94.out.good
fc winres\94.err testres\94.err.good

rwloadsim -q 95.rwl > winres\95.out 2> winres\95.err
fc winres\95.out testres\95.out.good
fc winres\95.err testres\95.err.good

rwloadsim -q 96.rwl > winres\96.out 2> winres\96.err
fc winres\96.out testres\96.out.good
fc winres\96.err testres\96.err.good

rwloadsim -q 97.rwl > winres\97.out 2> winres\97.err
fc winres\97.out testres\97.out.good
fc winres\97.err testres\97.err.good

rwloadsim -q 98.rwl > winres\98.out 2> winres\98.err
fc winres\98.out testres\98.out.good
fc winres\98.err testres\98.err.good

rwloadsim -q 99.rwl > winres\99.out 2> winres\99.err
fc winres\99.out testres\99.out.good
fc winres\99.err testres\99.err.good

rwloadsim -q 100.rwl > winres\100.out 2> winres\100.err
fc winres\100.out testres\100.out.good
fc winres\100.err testres\100.err.good

rwloadsim -q 101.rwl > winres\101.out 2> winres\101.err
fc winres\101.out testres\101.out.good
fc winres\101.err testres\101.err.good

rwloadsim -q 102.rwl > winres\102.out 2> winres\102.err
fc winres\102.out testres\102.out.good
fc winres\102.err testres\102.err.good

rwloadsim -q 103.rwl > winres\103.out 2> winres\103.err
fc winres\103.out testres\103.out.good
fc winres\103.err testres\103.err.good

rwloadsim -q 104.rwl > winres\104.out 2> winres\104.err
fc winres\104.out testres\104.out.good
fc winres\104.err testres\104.err.good

rwloadsim -q -A 2 105.rwl fortytwo 37 > winres\rwloadsim -q -A 2 105.rwl fortytwo 37.out 2> winres\rwloadsim -q -A 2 105.rwl fortytwo 37.err
fc winres\rwloadsim -q -A 2 105.rwl fortytwo 37.out testres\rwloadsim -q -A 2 105.rwl fortytwo 37.out.good
fc winres\rwloadsim -q -A 2 105.rwl fortytwo 37.err testres\rwloadsim -q -A 2 105.rwl fortytwo 37.err.good

rwloadsim -q 106.rwl > winres\106.out 2> winres\106.err
fc winres\106.out testres\106.out.good
fc winres\106.err testres\106.err.good

rwloadsim -q 108.rwl > winres\108.out 2> winres\108.err
fc winres\108.out testres\108.out.good
fc winres\108.err testres\108.err.good

rwloadsim -q 109.rwl > winres\109.out 2> winres\109.err
fc winres\109.out testres\109.out.good
fc winres\109.err testres\109.err.good

rwloadsim -q 111.rwl > winres\111.out 2> winres\111.err
fc winres\111.out testres\111.out.good
fc winres\111.err testres\111.err.good

rwloadsim -q 112.rwl > winres\112.out 2> winres\112.err
fc winres\112.out testres\112.out.good
fc winres\112.err testres\112.err.good

rwloadsim -q 113.rwl > winres\113.out 2> winres\113.err
fc winres\113.out testres\113.out.good
fc winres\113.err testres\113.err.good

rwloadsim -q 115.rwl > winres\115.out 2> winres\115.err
fc winres\115.out testres\115.out.good
fc winres\115.err testres\115.err.good

rwloadsim -q 116.rwl > winres\116.out 2> winres\116.err
fc winres\116.out testres\116.out.good
fc winres\116.err testres\116.err.good

rwloadsim -q 117.rwl > winres\117.out 2> winres\117.err
fc winres\117.out testres\117.out.good
fc winres\117.err testres\117.err.good

rwloadsim -q 118.rwl > winres\118.out 2> winres\118.err
fc winres\118.out testres\118.out.good
fc winres\118.err testres\118.err.good

rwloadsim -q 119.rwl > winres\119.out 2> winres\119.err
fc winres\119.out testres\119.out.good
fc winres\119.err testres\119.err.good

rwloadsim -q 120.rwl > winres\120.out 2> winres\120.err
fc winres\120.out testres\120.out.good
fc winres\120.err testres\120.err.good

rwloadsim -q 121.rwl > winres\121.out 2> winres\121.err
fc winres\121.out testres\121.out.good
fc winres\121.err testres\121.err.good

rwloadsim -q 122.rwl > winres\122.out 2> winres\122.err
fc winres\122.out testres\122.out.good
fc winres\122.err testres\122.err.good

rwloadsim -q 123.rwl > winres\123.out 2> winres\123.err
fc winres\123.out testres\123.out.good
fc winres\123.err testres\123.err.good

rwloadsim -q 124.rwl > winres\124.out 2> winres\124.err
fc winres\124.out testres\124.out.good
fc winres\124.err testres\124.err.good

rwloadsim -q 125.rwl > winres\125.out 2> winres\125.err
fc winres\125.out testres\125.out.good
fc winres\125.err testres\125.err.good

rwloadsim -q --flush-every=2 --flush-stop=9 126.rwl > winres\126.out 2> winres\126.err
fc winres\126.out testres\126.out.good
fc winres\126.err testres\126.err.good

rwloadsim -q 127.rwl > winres\127.out 2> winres\127.err
fc winres\127.out testres\127.out.good
fc winres\127.err testres\127.err.good

rwloadsim -q 128.rwl > winres\128.out 2> winres\128.err
fc winres\128.out testres\128.out.good
fc winres\128.err testres\128.err.good

rwloadsim -q 129.rwl > winres\129.out 2> winres\129.err
fc winres\129.out testres\129.out.good
fc winres\129.err testres\129.err.good

rwloadsim -q 130.rwl > winres\130.out 2> winres\130.err
fc winres\130.out testres\130.out.good
fc winres\130.err testres\130.err.good

rwloadsim -q 131.rwl > winres\131.out 2> winres\131.err
fc winres\131.out testres\131.out.good
fc winres\131.err testres\131.err.good

rwloadsim -q 132.rwl > winres\132.out 2> winres\132.err
fc winres\132.out testres\132.out.good
fc winres\132.err testres\132.err.good

rwloadsim -q 133.rwl > winres\133.out 2> winres\133.err
fc winres\133.out testres\133.out.good
fc winres\133.err testres\133.err.good

rwloadsim -q 134.rwl > winres\134.out 2> winres\134.err
fc winres\134.out testres\134.out.good
fc winres\134.err testres\134.err.good

rwloadsim -q 135.rwl > winres\135.out 2> winres\135.err
fc winres\135.out testres\135.out.good
fc winres\135.err testres\135.err.good

rwloadsim -q 136.rwl > winres\136.out 2> winres\136.err
fc winres\136.out testres\136.out.good
fc winres\136.err testres\136.err.good

rwloadsim -q 137.rwl > winres\137.out 2> winres\137.err
fc winres\137.out testres\137.out.good
fc winres\137.err testres\137.err.good

rwloadsim -q 138.rwl > winres\138.out 2> winres\138.err
fc winres\138.out testres\138.out.good
fc winres\138.err testres\138.err.good

rwloadsim -q 139.rwl > winres\139.out 2> winres\139.err
fc winres\139.out testres\139.out.good
fc winres\139.err testres\139.err.good

rwloadsim -q 140.rwl > winres\140.out 2> winres\140.err
fc winres\140.out testres\140.out.good
fc winres\140.err testres\140.err.good

rwloadsim -q 141.rwl > winres\141.out 2> winres\141.err
fc winres\141.out testres\141.out.good
fc winres\141.err testres\141.err.good

rwloadsim -q -k bla142 142.rwl > winres\142.out 2> winres\142.err
fc winres\142.out testres\142.out.good
fc winres\142.err testres\142.err.good

rwloadsim -q 143.rwl > winres\143.out 2> winres\143.err
fc winres\143.out testres\143.out.good
fc winres\143.err testres\143.err.good

rwloadsim -q 148.rwl > winres\148.out 2> winres\148.err
fc winres\148.out testres\148.out.good
fc winres\148.err testres\148.err.good

rwloadsim -q -r 149.rwl > winres\149.out 2> winres\149.err
fc winres\149.out testres\149.out.good
fc winres\149.err testres\149.err.good

rwloadsim -q 150.rwl > winres\150.out 2> winres\150.err
fc winres\150.out testres\150.out.good
fc winres\150.err testres\150.err.good

rwloadsim -q 151.rwl > winres\151.out 2> winres\151.err
fc winres\151.out testres\151.out.good
fc winres\151.err testres\151.err.good

rwloadsim -q 152.rwl > winres\152.out 2> winres\152.err
fc winres\152.out testres\152.out.good
fc winres\152.err testres\152.err.good

rwloadsim -q 153.rwl > winres\153.out 2> winres\153.err
fc winres\153.out testres\153.out.good
fc winres\153.err testres\153.err.good

rwloadsim -q 154.rwl > winres\154.out 2> winres\154.err
fc winres\154.out testres\154.out.good
fc winres\154.err testres\154.err.good

rwloadsim -q 155.rwl > winres\155.out 2> winres\155.err
fc winres\155.out testres\155.out.good
fc winres\155.err testres\155.err.good

rwloadsim -q 156.rwl > winres\156.out 2> winres\156.err
fc winres\156.out testres\156.out.good
fc winres\156.err testres\156.err.good

rwloadsim -q 157.rwl > winres\157.out 2> winres\157.err
fc winres\157.out testres\157.out.good
fc winres\157.err testres\157.err.good

rwloadsim -q -sss 158.rwl > winres\158.out 2> winres\158.err
fc winres\158.out testres\158.out.good
fc winres\158.err testres\158.err.good

rwloadsim -q 159.rwl > winres\159.out 2> winres\159.err
fc winres\159.out testres\159.out.good
fc winres\159.err testres\159.err.good

rwloadsim -q 160.rwl > winres\160.out 2> winres\160.err
fc winres\160.out testres\160.out.good
fc winres\160.err testres\160.err.good

rwloadsim -q 161.rwl > winres\161.out 2> winres\161.err
fc winres\161.out testres\161.out.good
fc winres\161.err testres\161.err.good

rwloadsim -q 162.rwl > winres\162.out 2> winres\162.err
fc winres\162.out testres\162.out.good
fc winres\162.err testres\162.err.good

rwloadsim -q 163.rwl > winres\163.out 2> winres\163.err
fc winres\163.out testres\163.out.good
fc winres\163.err testres\163.err.good

rwloadsim -q 164.rwl > winres\164.out 2> winres\164.err
fc winres\164.out testres\164.out.good
fc winres\164.err testres\164.err.good

rwloadsim -q 165.rwl > winres\165.out 2> winres\165.err
fc winres\165.out testres\165.out.good
fc winres\165.err testres\165.err.good

rwloadsim -q 166.rwl > winres\166.out 2> winres\166.err
fc winres\166.out testres\166.out.good
fc winres\166.err testres\166.err.good

rwloadsim -q 167.rwl > winres\167.out 2> winres\167.err
fc winres\167.out testres\167.out.good
fc winres\167.err testres\167.err.good

rwloadsim -q 168.rwl > winres\168.out 2> winres\168.err
fc winres\168.out testres\168.out.good
fc winres\168.err testres\168.err.good

rwloadsim -q 169.rwl > winres\169.out 2> winres\169.err
fc winres\169.out testres\169.out.good
fc winres\169.err testres\169.err.good

rwloadsim -q 170.rwl > winres\170.out 2> winres\170.err
fc winres\170.out testres\170.out.good
fc winres\170.err testres\170.err.good

rwloadsim -q 171.rwl > winres\171.out 2> winres\171.err
fc winres\171.out testres\171.out.good
fc winres\171.err testres\171.err.good

rwloadsim -q 172.rwl > winres\172.out 2> winres\172.err
fc winres\172.out testres\172.out.good
fc winres\172.err testres\172.err.good

rwloadsim -q 174.rwl > winres\174.out 2> winres\174.err
fc winres\174.out testres\174.out.good
fc winres\174.err testres\174.err.good

rwloadsim -q 176.rwl > winres\176.out 2> winres\176.err
fc winres\176.out testres\176.out.good
fc winres\176.err testres\176.err.good

rwloadsim -q 177.rwl > winres\177.out 2> winres\177.err
fc winres\177.out testres\177.out.good
fc winres\177.err testres\177.err.good

rwloadsim -q 178.rwl > winres\178.out 2> winres\178.err
fc winres\178.out testres\178.out.good
fc winres\178.err testres\178.err.good

rwloadsim -q 179.rwl > winres\179.out 2> winres\179.err
fc winres\179.out testres\179.out.good
fc winres\179.err testres\179.err.good

rwloadsim -q --abc 42 179.rwl > winres\179.out 2> winres\179.err
fc winres\179.out testres\179.out.good
fc winres\179.err testres\179.err.good

rwloadsim -q --no-yesorno 179.rwl > winres\179.out 2> winres\179.err
fc winres\179.out testres\179.out.good
fc winres\179.err testres\179.err.good

rwloadsim -q --abc "-42" 179.rwl > winres\179.out 2> winres\179.err
fc winres\179.out testres\179.out.good
fc winres\179.err testres\179.err.good

rwloadsim -q --nooryes 179.rwl > winres\179.out 2> winres\179.err
fc winres\179.out testres\179.out.good
fc winres\179.err testres\179.err.good

rwloadsim -q --hello Howdy_verden --abc 424242 179.rwl > winres\179.out 2> winres\179.err
fc winres\179.out testres\179.out.good
fc winres\179.err testres\179.err.good

rwloadsim -q --hello Howdy_verden --nooryes --abc 42424 179.rwl > winres\179.out 2> winres\179.err
fc winres\179.out testres\179.out.good
fc winres\179.err testres\179.err.good

rwloadsim -q --len4 12345 --abc 42 180.rwl > winres\180.out 2> winres\180.err
fc winres\180.out testres\180.out.good
fc winres\180.err testres\180.err.good

rwloadsim -q 181.rwl > winres\181.out 2> winres\181.err
fc winres\181.out testres\181.out.good
fc winres\181.err testres\181.err.good

rwloadsim -q --case182=1 182.rwl > winres\182.out 2> winres\182.err
fc winres\182.out testres\182.out.good
fc winres\182.err testres\182.err.good

rwloadsim -q -u --case182=2 182.rwl > winres\182.out 2> winres\182.err
fc winres\182.out testres\182.out.good
fc winres\182.err testres\182.err.good

rwloadsim -q 183.rwl > winres\183.out 2> winres\183.err
fc winres\183.out testres\183.out.good
fc winres\183.err testres\183.err.good

rwloadsim -q 184.rwl > winres\184.out 2> winres\184.err
fc winres\184.out testres\184.out.good
fc winres\184.err testres\184.err.good

rwloadsim -q 185.rwl > winres\185.out 2> winres\185.err
fc winres\185.out testres\185.out.good
fc winres\185.err testres\185.err.good

rwloadsim -q 186.rwl > winres\186.out 2> winres\186.err
fc winres\186.out testres\186.out.good
fc winres\186.err testres\186.err.good

rwloadsim -q 187.rwl > winres\187.out 2> winres\187.err
fc winres\187.out testres\187.out.good
fc winres\187.err testres\187.err.good

rwloadsim -q 188.rwl > winres\188.out 2> winres\188.err
fc winres\188.out testres\188.out.good
fc winres\188.err testres\188.err.good

rwloadsim -q 189.rwl > winres\189.out 2> winres\189.err
fc winres\189.out testres\189.out.good
fc winres\189.err testres\189.err.good

rwloadsim -q 190.rwl > winres\190.out 2> winres\190.err
fc winres\190.out testres\190.out.good
fc winres\190.err testres\190.err.good

rwloadsim -q 191.rwl > winres\191.out 2> winres\191.err
fc winres\191.out testres\191.out.good
fc winres\191.err testres\191.err.good

rwloadsim -q 192.rwl > winres\192.out 2> winres\192.err
fc winres\192.out testres\192.out.good
fc winres\192.err testres\192.err.good

rwloadsim -q 193.rwl > winres\193.out 2> winres\193.err
fc winres\193.out testres\193.out.good
fc winres\193.err testres\193.err.good

rwloadsim -q 194.rwl > winres\194.out 2> winres\194.err
fc winres\194.out testres\194.out.good
fc winres\194.err testres\194.err.good

rwloadsim -q 195.rwl > winres\195.out 2> winres\195.err
fc winres\195.out testres\195.out.good
fc winres\195.err testres\195.err.good

rwloadsim -q 196.rwl > winres\196.out 2> winres\196.err
fc winres\196.out testres\196.out.good
fc winres\196.err testres\196.err.good

rwloadsim -q -sss 197.rwl > winres\197.out 2> winres\197.err
fc winres\197.out testres\197.out.good
fc winres\197.err testres\197.err.good

rwloadsim -q 198.rwl > winres\198.out 2> winres\198.err
fc winres\198.out testres\198.out.good
fc winres\198.err testres\198.err.good

rwloadsim -q 199.rwl > winres\199.out 2> winres\199.err
fc winres\199.out testres\199.out.good
fc winres\199.err testres\199.err.good

rwloadsim -q 200.rwl > winres\200.out 2> winres\200.err
fc winres\200.out testres\200.out.good
fc winres\200.err testres\200.err.good

rwloadsim -q 201.rwl > winres\201.out 2> winres\201.err
fc winres\201.out testres\201.out.good
fc winres\201.err testres\201.err.good

rwloadsim -q 202.rwl > winres\202.out 2> winres\202.err
fc winres\202.out testres\202.out.good
fc winres\202.err testres\202.err.good

rwloadsim -q 203.rwl > winres\203.out 2> winres\203.err
fc winres\203.out testres\203.out.good
fc winres\203.err testres\203.err.good

rwloadsim -q 204.rwl > winres\204.out 2> winres\204.err
fc winres\204.out testres\204.out.good
fc winres\204.err testres\204.err.good

rwloadsim -q 205.rwl > winres\205.out 2> winres\205.err
fc winres\205.out testres\205.out.good
fc winres\205.err testres\205.err.good

rwloadsim -q 206.rwl > winres\206.out 2> winres\206.err
fc winres\206.out testres\206.out.good
fc winres\206.err testres\206.err.good

rwloadsim -q 207.rwl > winres\207.out 2> winres\207.err
fc winres\207.out testres\207.out.good
fc winres\207.err testres\207.err.good

rwloadsim -q 208.rwl > winres\208.out 2> winres\208.err
fc winres\208.out testres\208.out.good
fc winres\208.err testres\208.err.good

rwloadsim -q 209.rwl > winres\209.out 2> winres\209.err
fc winres\209.out testres\209.out.good
fc winres\209.err testres\209.err.good

rwloadsim -q 210.rwl > winres\210.out 2> winres\210.err
fc winres\210.out testres\210.out.good
fc winres\210.err testres\210.err.good

rwloadsim -q 211.rwl > winres\211.out 2> winres\211.err
fc winres\211.out testres\211.out.good
fc winres\211.err testres\211.err.good

rwloadsim -q 212.rwl > winres\212.out 2> winres\212.err
fc winres\212.out testres\212.out.good
fc winres\212.err testres\212.err.good

rwloadsim -q -sss 213.rwl > winres\213.out 2> winres\213.err
fc winres\213.out testres\213.out.good
fc winres\213.err testres\213.err.good

rwloadsim -q 214.rwl > winres\214.out 2> winres\214.err
fc winres\214.out testres\214.out.good
fc winres\214.err testres\214.err.good

rwloadsim -q 215.rwl > winres\215.out 2> winres\215.err
fc winres\215.out testres\215.out.good
fc winres\215.err testres\215.err.good

rwloadsim -q 216.rwl > winres\216.out 2> winres\216.err
fc winres\216.out testres\216.out.good
fc winres\216.err testres\216.err.good

rwloadsim -q 217.rwl > winres\217.out 2> winres\217.err
fc winres\217.out testres\217.out.good
fc winres\217.err testres\217.err.good

rwloadsim -q 218.rwl > winres\218.out 2> winres\218.err
fc winres\218.out testres\218.out.good
fc winres\218.err testres\218.err.good

rwloadsim -q 219.rwl > winres\219.out 2> winres\219.err
fc winres\219.out testres\219.out.good
fc winres\219.err testres\219.err.good

rwloadsim -q 220.rwl > winres\220.out 2> winres\220.err
fc winres\220.out testres\220.out.good
fc winres\220.err testres\220.err.good

rwloadsim -q 221.rwl > winres\221.out 2> winres\221.err
fc winres\221.out testres\221.out.good
fc winres\221.err testres\221.err.good

rwloadsim -q 222.rwl > winres\222.out 2> winres\222.err
fc winres\222.out testres\222.out.good
fc winres\222.err testres\222.err.good

rwloadsim -q 223.rwl > winres\223.out 2> winres\223.err
fc winres\223.out testres\223.out.good
fc winres\223.err testres\223.err.good

rwloadsim -q 224.rwl > winres\224.out 2> winres\224.err
fc winres\224.out testres\224.out.good
fc winres\224.err testres\224.err.good

rwloadsim -q 225.rwl > winres\225.out 2> winres\225.err
fc winres\225.out testres\225.out.good
fc winres\225.err testres\225.err.good

rwloadsim -q 226.rwl > winres\226.out 2> winres\226.err
fc winres\226.out testres\226.out.good
fc winres\226.err testres\226.err.good

rwloadsim -q 227.rwl > winres\227.out 2> winres\227.err
fc winres\227.out testres\227.out.good
fc winres\227.err testres\227.err.good

rwloadsim -q 228.rwl > winres\228.out 2> winres\228.err
fc winres\228.out testres\228.out.good
fc winres\228.err testres\228.err.good

rwloadsim -q 229.rwl > winres\229.out 2> winres\229.err
fc winres\229.out testres\229.out.good
fc winres\229.err testres\229.err.good

rwloadsim -q 230.rwl > winres\230.out 2> winres\230.err
fc winres\230.out testres\230.out.good
fc winres\230.err testres\230.err.good

rwloadsim -q 231.rwl > winres\231.out 2> winres\231.err
fc winres\231.out testres\231.out.good
fc winres\231.err testres\231.err.good

rwloadsim -q 232.rwl > winres\232.out 2> winres\232.err
fc winres\232.out testres\232.out.good
fc winres\232.err testres\232.err.good

rwloadsim -q 233.rwl > winres\233.out 2> winres\233.err
fc winres\233.out testres\233.out.good
fc winres\233.err testres\233.err.good

rwloadsim -q 234.rwl > winres\234.out 2> winres\234.err
fc winres\234.out testres\234.out.good
fc winres\234.err testres\234.err.good

rwloadsim -q 235.rwl > winres\235.out 2> winres\235.err
fc winres\235.out testres\235.out.good
fc winres\235.err testres\235.err.good

rwloadsim -q 236.rwl > winres\236.out 2> winres\236.err
fc winres\236.out testres\236.out.good
fc winres\236.err testres\236.err.good

rwloadsim -q 237.rwl > winres\237.out 2> winres\237.err
fc winres\237.out testres\237.out.good
fc winres\237.err testres\237.err.good

rwloadsim -q 238.rwl > winres\238.out 2> winres\238.err
fc winres\238.out testres\238.out.good
fc winres\238.err testres\238.err.good

rwloadsim -q 239.rwl > winres\239.out 2> winres\239.err
fc winres\239.out testres\239.out.good
fc winres\239.err testres\239.err.good

rwloadsim -q 240.rwl > winres\240.out 2> winres\240.err
fc winres\240.out testres\240.out.good
fc winres\240.err testres\240.err.good

rwloadsim -q 241.rwl > winres\241.out 2> winres\241.err
fc winres\241.out testres\241.out.good
fc winres\241.err testres\241.err.good

rwloadsim -q 242.rwl > winres\242.out 2> winres\242.err
fc winres\242.out testres\242.out.good
fc winres\242.err testres\242.err.good

rwloadsim -q 243.rwl > winres\243.out 2> winres\243.err
fc winres\243.out testres\243.out.good
fc winres\243.err testres\243.err.good

rwloadsim -q 244.rwl > winres\244.out 2> winres\244.err
fc winres\244.out testres\244.out.good
fc winres\244.err testres\244.err.good

rwloadsim -q 245.rwl > winres\245.out 2> winres\245.err
fc winres\245.out testres\245.out.good
fc winres\245.err testres\245.err.good

rwloadsim -q 246.rwl > winres\246.out 2> winres\246.err
fc winres\246.out testres\246.out.good
fc winres\246.err testres\246.err.good

rwloadsim -q 247.rwl > winres\247.out 2> winres\247.err
fc winres\247.out testres\247.out.good
fc winres\247.err testres\247.err.good

rwloadsim -q 248.rwl > winres\248.out 2> winres\248.err
fc winres\248.out testres\248.out.good
fc winres\248.err testres\248.err.good

rwloadsim -q 249.rwl > winres\249.out 2> winres\249.err
fc winres\249.out testres\249.out.good
fc winres\249.err testres\249.err.good

rwloadsim -q 250.rwl > winres\250.out 2> winres\250.err
fc winres\250.out testres\250.out.good
fc winres\250.err testres\250.err.good

rwloadsim -q 251.rwl > winres\251.out 2> winres\251.err
fc winres\251.out testres\251.out.good
fc winres\251.err testres\251.err.good

rwloadsim -q 252.rwl > winres\252.out 2> winres\252.err
fc winres\252.out testres\252.out.good
fc winres\252.err testres\252.err.good

rwloadsim -q 253.rwl > winres\253.out 2> winres\253.err
fc winres\253.out testres\253.out.good
fc winres\253.err testres\253.err.good

rwloadsim -q 254.rwl > winres\254.out 2> winres\254.err
fc winres\254.out testres\254.out.good
fc winres\254.err testres\254.err.good

rwloadsim -q 255.rwl > winres\255.out 2> winres\255.err
fc winres\255.out testres\255.out.good
fc winres\255.err testres\255.err.good

rwloadsim -q 256.rwl > winres\256.out 2> winres\256.err
fc winres\256.out testres\256.out.good
fc winres\256.err testres\256.err.good

rwloadsim -q 257.rwl > winres\257.out 2> winres\257.err
fc winres\257.out testres\257.out.good
fc winres\257.err testres\257.err.good

rwloadsim -q 258.rwl > winres\258.out 2> winres\258.err
fc winres\258.out testres\258.out.good
fc winres\258.err testres\258.err.good

rwloadsim -q 259.rwl > winres\259.out 2> winres\259.err
fc winres\259.out testres\259.out.good
fc winres\259.err testres\259.err.good

rwloadsim -q 260.rwl > winres\260.out 2> winres\260.err
fc winres\260.out testres\260.out.good
fc winres\260.err testres\260.err.good

rwloadsim -q 261.rwl > winres\261.out 2> winres\261.err
fc winres\261.out testres\261.out.good
fc winres\261.err testres\261.err.good

rwloadsim -q 262.rwl > winres\262.out 2> winres\262.err
fc winres\262.out testres\262.out.good
fc winres\262.err testres\262.err.good

rwloadsim -q 263.rwl > winres\263.out 2> winres\263.err
fc winres\263.out testres\263.out.good
fc winres\263.err testres\263.err.good

rwloadsim -q 264.rwl > winres\264.out 2> winres\264.err
fc winres\264.out testres\264.out.good
fc winres\264.err testres\264.err.good

rwloadsim -q 265.rwl > winres\265.out 2> winres\265.err
fc winres\265.out testres\265.out.good
fc winres\265.err testres\265.err.good

rwloadsim -q 266.rwl > winres\266.out 2> winres\266.err
fc winres\266.out testres\266.out.good
fc winres\266.err testres\266.err.good

rwloadsim -q 267.rwl > winres\267.out 2> winres\267.err
fc winres\267.out testres\267.out.good
fc winres\267.err testres\267.err.good

rwloadsim -q 268.rwl > winres\268.out 2> winres\268.err
fc winres\268.out testres\268.out.good
fc winres\268.err testres\268.err.good

rwloadsim -q 269.rwl > winres\269.out 2> winres\269.err
fc winres\269.out testres\269.out.good
fc winres\269.err testres\269.err.good

rwloadsim -q 270.rwl > winres\270.out 2> winres\270.err
fc winres\270.out testres\270.out.good
fc winres\270.err testres\270.err.good

rwloadsim -q 271.rwl > winres\271.out 2> winres\271.err
fc winres\271.out testres\271.out.good
fc winres\271.err testres\271.err.good

rwloadsim -q 272.rwl > winres\272.out 2> winres\272.err
fc winres\272.out testres\272.out.good
fc winres\272.err testres\272.err.good

rwloadsim -q 273.rwl > winres\273.out 2> winres\273.err
fc winres\273.out testres\273.out.good
fc winres\273.err testres\273.err.good

rwloadsim -q 274.rwl > winres\274.out 2> winres\274.err
fc winres\274.out testres\274.out.good
fc winres\274.err testres\274.err.good

rwloadsim -q 275.rwl > winres\275.out 2> winres\275.err
fc winres\275.out testres\275.out.good
fc winres\275.err testres\275.err.good

rwloadsim -q 276.rwl > winres\276.out 2> winres\276.err
fc winres\276.out testres\276.out.good
fc winres\276.err testres\276.err.good

rwloadsim -q 277.rwl > winres\277.out 2> winres\277.err
fc winres\277.out testres\277.out.good
fc winres\277.err testres\277.err.good

rwloadsim -q 278.rwl > winres\278.out 2> winres\278.err
fc winres\278.out testres\278.out.good
fc winres\278.err testres\278.err.good

rwloadsim -q 279.rwl > winres\279.out 2> winres\279.err
fc winres\279.out testres\279.out.good
fc winres\279.err testres\279.err.good

rwloadsim -q 280.rwl > winres\280.out 2> winres\280.err
fc winres\280.out testres\280.out.good
fc winres\280.err testres\280.err.good

rwloadsim -q 281.rwl > winres\281.out 2> winres\281.err
fc winres\281.out testres\281.out.good
fc winres\281.err testres\281.err.good

rwloadsim -q 282.rwl > winres\282.out 2> winres\282.err
fc winres\282.out testres\282.out.good
fc winres\282.err testres\282.err.good

rwloadsim -q 283.rwl > winres\283.out 2> winres\283.err
fc winres\283.out testres\283.out.good
fc winres\283.err testres\283.err.good

rwloadsim -q 284.rwl > winres\284.out 2> winres\284.err
fc winres\284.out testres\284.out.good
fc winres\284.err testres\284.err.good

rwloadsim -q 285.rwl > winres\285.out 2> winres\285.err
fc winres\285.out testres\285.out.good
fc winres\285.err testres\285.err.good

rwloadsim -q 286.rwl > winres\286.out 2> winres\286.err
fc winres\286.out testres\286.out.good
fc winres\286.err testres\286.err.good

rwloadsim -q 287.rwl > winres\287.out 2> winres\287.err
fc winres\287.out testres\287.out.good
fc winres\287.err testres\287.err.good

rwloadsim -q 288.rwl > winres\288.out 2> winres\288.err
fc winres\288.out testres\288.out.good
fc winres\288.err testres\288.err.good

rwloadsim -q 289.rwl > winres\289.out 2> winres\289.err
fc winres\289.out testres\289.out.good
fc winres\289.err testres\289.err.good

rwloadsim -q 290.rwl > winres\290.out 2> winres\290.err
fc winres\290.out testres\290.out.good
fc winres\290.err testres\290.err.good

rwloadsim -q 291.rwl > winres\291.out 2> winres\291.err
fc winres\291.out testres\291.out.good
fc winres\291.err testres\291.err.good

rwloadsim -q 292.rwl > winres\292.out 2> winres\292.err
fc winres\292.out testres\292.out.good
fc winres\292.err testres\292.err.good

rwloadsim -q 293.rwl > winres\293.out 2> winres\293.err
fc winres\293.out testres\293.out.good
fc winres\293.err testres\293.err.good

rwloadsim -q 294.rwl > winres\294.out 2> winres\294.err
fc winres\294.out testres\294.out.good
fc winres\294.err testres\294.err.good

rwloadsim -q 295.rwl > winres\295.out 2> winres\295.err
fc winres\295.out testres\295.out.good
fc winres\295.err testres\295.err.good

rwloadsim -q 296.rwl > winres\296.out 2> winres\296.err
fc winres\296.out testres\296.out.good
fc winres\296.err testres\296.err.good

rwloadsim -q 297.rwl > winres\297.out 2> winres\297.err
fc winres\297.out testres\297.out.good
fc winres\297.err testres\297.err.good

rwloadsim -q 298.rwl > winres\298.out 2> winres\298.err
fc winres\298.out testres\298.out.good
fc winres\298.err testres\298.err.good

rwloadsim -q 299.rwl > winres\299.out 2> winres\299.err
fc winres\299.out testres\299.out.good
fc winres\299.err testres\299.err.good

rwloadsim -q 301.rwl > winres\301.out 2> winres\301.err
fc winres\301.out testres\301.out.good
fc winres\301.err testres\301.err.good

rwloadsim -q 302.rwl > winres\302.out 2> winres\302.err
fc winres\302.out testres\302.out.good
fc winres\302.err testres\302.err.good

rwloadsim -q 303.rwl > winres\303.out 2> winres\303.err
fc winres\303.out testres\303.out.good
fc winres\303.err testres\303.err.good

rwloadsim -q 304.rwl > winres\304.out 2> winres\304.err
fc winres\304.out testres\304.out.good
fc winres\304.err testres\304.err.good

rwloadsim -q 305.rwl > winres\305.out 2> winres\305.err
fc winres\305.out testres\305.out.good
fc winres\305.err testres\305.err.good

rwloadsim -q 306.rwl > winres\306.out 2> winres\306.err
fc winres\306.out testres\306.out.good
fc winres\306.err testres\306.err.good

rwloadsim -q 307.rwl > winres\307.out 2> winres\307.err
fc winres\307.out testres\307.out.good
fc winres\307.err testres\307.err.good

rwloadsim -q 308.rwl > winres\308.out 2> winres\308.err
fc winres\308.out testres\308.out.good
fc winres\308.err testres\308.err.good

rwloadsim -q 309.rwl > winres\309.out 2> winres\309.err
fc winres\309.out testres\309.out.good
fc winres\309.err testres\309.err.good

rwloadsim -q 310.rwl > winres\310.out 2> winres\310.err
fc winres\310.out testres\310.out.good
fc winres\310.err testres\310.err.good

rwloadsim -q 311.rwl > winres\311.out 2> winres\311.err
fc winres\311.out testres\311.out.good
fc winres\311.err testres\311.err.good

rwloadsim -q 312.rwl > winres\312.out 2> winres\312.err
fc winres\312.out testres\312.out.good
fc winres\312.err testres\312.err.good

rwloadsim -q 313.rwl > winres\313.out 2> winres\313.err
fc winres\313.out testres\313.out.good
fc winres\313.err testres\313.err.good

rwloadsim -q 314.rwl > winres\314.out 2> winres\314.err
fc winres\314.out testres\314.out.good
fc winres\314.err testres\314.err.good

rwloadsim -q 315.rwl > winres\315.out 2> winres\315.err
fc winres\315.out testres\315.out.good
fc winres\315.err testres\315.err.good

rwloadsim -q 316.rwl > winres\316.out 2> winres\316.err
fc winres\316.out testres\316.out.good
fc winres\316.err testres\316.err.good

rwloadsim -q 317.rwl > winres\317.out 2> winres\317.err
fc winres\317.out testres\317.out.good
fc winres\317.err testres\317.err.good

rwloadsim -q 318.rwl > winres\318.out 2> winres\318.err
fc winres\318.out testres\318.out.good
fc winres\318.err testres\318.err.good

rwloadsim -q 319.rwl > winres\319.out 2> winres\319.err
fc winres\319.out testres\319.out.good
fc winres\319.err testres\319.err.good

rwloadsim -q 320.rwl > winres\320.out 2> winres\320.err
fc winres\320.out testres\320.out.good
fc winres\320.err testres\320.err.good

rwloadsim -q 321.rwl > winres\321.out 2> winres\321.err
fc winres\321.out testres\321.out.good
fc winres\321.err testres\321.err.good

rwloadsim -q 322.rwl > winres\322.out 2> winres\322.err
fc winres\322.out testres\322.out.good
fc winres\322.err testres\322.err.good

rwloadsim -q 327.rwl > winres\327.out 2> winres\327.err
fc winres\327.out testres\327.out.good
fc winres\327.err testres\327.err.good

rwloadsim -q 328.rwl > winres\328.out 2> winres\328.err
fc winres\328.out testres\328.out.good
fc winres\328.err testres\328.err.good

rwloadsim -q 329.rwl > winres\329.out 2> winres\329.err
fc winres\329.out testres\329.out.good
fc winres\329.err testres\329.err.good

rwloadsim -q 330.rwl > winres\330.out 2> winres\330.err
fc winres\330.out testres\330.out.good
fc winres\330.err testres\330.err.good

rwloadsim -q 331.rwl > winres\331.out 2> winres\331.err
fc winres\331.out testres\331.out.good
fc winres\331.err testres\331.err.good

rwloadsim -q 332.rwl > winres\332.out 2> winres\332.err
fc winres\332.out testres\332.out.good
fc winres\332.err testres\332.err.good

rwloadsim -q 333.rwl > winres\333.out 2> winres\333.err
fc winres\333.out testres\333.out.good
fc winres\333.err testres\333.err.good

rwloadsim -q 334.rwl > winres\334.out 2> winres\334.err
fc winres\334.out testres\334.out.good
fc winres\334.err testres\334.err.good

rwloadsim -q 335.rwl > winres\335.out 2> winres\335.err
fc winres\335.out testres\335.out.good
fc winres\335.err testres\335.err.good

rwloadsim -q 336.rwl > winres\336.out 2> winres\336.err
fc winres\336.out testres\336.out.good
fc winres\336.err testres\336.err.good

rwloadsim -q 337.rwl > winres\337.out 2> winres\337.err
fc winres\337.out testres\337.out.good
fc winres\337.err testres\337.err.good

rwloadsim -q 338.rwl > winres\338.out 2> winres\338.err
fc winres\338.out testres\338.out.good
fc winres\338.err testres\338.err.good

rwloadsim -q 339.rwl > winres\339.out 2> winres\339.err
fc winres\339.out testres\339.out.good
fc winres\339.err testres\339.err.good

rwloadsim -q 340.rwl > winres\340.out 2> winres\340.err
fc winres\340.out testres\340.out.good
fc winres\340.err testres\340.err.good

rwloadsim -q 341.rwl > winres\341.out 2> winres\341.err
fc winres\341.out testres\341.out.good
fc winres\341.err testres\341.err.good

rwloadsim -q 342.rwl > winres\342.out 2> winres\342.err
fc winres\342.out testres\342.out.good
fc winres\342.err testres\342.err.good

rwloadsim -q 343.rwl > winres\343.out 2> winres\343.err
fc winres\343.out testres\343.out.good
fc winres\343.err testres\343.err.good

rwloadsim -q 345.rwl > winres\345.out 2> winres\345.err
fc winres\345.out testres\345.out.good
fc winres\345.err testres\345.err.good

rwloadsim -q 346.rwl > winres\346.out 2> winres\346.err
fc winres\346.out testres\346.out.good
fc winres\346.err testres\346.err.good

rwloadsim -q 347.rwl > winres\347.out 2> winres\347.err
fc winres\347.out testres\347.out.good
fc winres\347.err testres\347.err.good

rwloadsim -q -D test,0xZ 348.rwl > winres\348.out 2> winres\348.err
fc winres\348.out testres\348.out.good
fc winres\348.err testres\348.err.good

rwloadsim -q 349.rwl > winres\349.out 2> winres\349.err
fc winres\349.out testres\349.out.good
fc winres\349.err testres\349.err.good

rwloadsim -q 350.rwl > winres\350.out 2> winres\350.err
fc winres\350.out testres\350.out.good
fc winres\350.err testres\350.err.good

rwloadsim -q 351.rwl > winres\351.out 2> winres\351.err
fc winres\351.out testres\351.out.good
fc winres\351.err testres\351.err.good

rwloadsim -q 352.rwl > winres\352.out 2> winres\352.err
fc winres\352.out testres\352.out.good
fc winres\352.err testres\352.err.good

rwloadsim -q 353.rwl > winres\353.out 2> winres\353.err
fc winres\353.out testres\353.out.good
fc winres\353.err testres\353.err.good

rwloadsim -q 354.rwl > winres\354.out 2> winres\354.err
fc winres\354.out testres\354.out.good
fc winres\354.err testres\354.err.good

rwloadsim -q 355.rwl > winres\355.out 2> winres\355.err
fc winres\355.out testres\355.out.good
fc winres\355.err testres\355.err.good

rwloadsim -q 356.rwl > winres\356.out 2> winres\356.err
fc winres\356.out testres\356.out.good
fc winres\356.err testres\356.err.good

rwloadsim -q 357.rwl > winres\357.out 2> winres\357.err
fc winres\357.out testres\357.out.good
fc winres\357.err testres\357.err.good

rwloadsim -q 358.rwl > winres\358.out 2> winres\358.err
fc winres\358.out testres\358.out.good
fc winres\358.err testres\358.err.good

rwloadsim -q 359.rwl > winres\359.out 2> winres\359.err
fc winres\359.out testres\359.out.good
fc winres\359.err testres\359.err.good

rwloadsim -q 360.rwl > winres\360.out 2> winres\360.err
fc winres\360.out testres\360.out.good
fc winres\360.err testres\360.err.good

rwloadsim -q 361.rwl > winres\361.out 2> winres\361.err
fc winres\361.out testres\361.out.good
fc winres\361.err testres\361.err.good

rwloadsim -q 362.rwl > winres\362.out 2> winres\362.err
fc winres\362.out testres\362.out.good
fc winres\362.err testres\362.err.good

rwloadsim -q 363.rwl > winres\363.out 2> winres\363.err
fc winres\363.out testres\363.out.good
fc winres\363.err testres\363.err.good

rwloadsim -q 364.rwl > winres\364.out 2> winres\364.err
fc winres\364.out testres\364.out.good
fc winres\364.err testres\364.err.good

rwloadsim -q 365.rwl > winres\365.out 2> winres\365.err
fc winres\365.out testres\365.out.good
fc winres\365.err testres\365.err.good

rwloadsim -q 366.rwl > winres\366.out 2> winres\366.err
fc winres\366.out testres\366.out.good
fc winres\366.err testres\366.err.good

rwloadsim -q 367.rwl > winres\367.out 2> winres\367.err
fc winres\367.out testres\367.out.good
fc winres\367.err testres\367.err.good

rwloadsim -q --oo=42 367.rwl > winres\367.out 2> winres\367.err
fc winres\367.out testres\367.out.good
fc winres\367.err testres\367.err.good

rwloadsim -q --no-ooswitch 367.rwl > winres\367.out 2> winres\367.err
fc winres\367.out testres\367.out.good
fc winres\367.err testres\367.err.good

rwloadsim -q --ooval=22 367.rwl > winres\367.out 2> winres\367.err
fc winres\367.out testres\367.out.good
fc winres\367.err testres\367.err.good

rwloadsim -q --oo 42 --ooswitch --oovalb 42 367.rwl > winres\367.out 2> winres\367.err
fc winres\367.out testres\367.out.good
fc winres\367.err testres\367.err.good

rwloadsim -q --oovala=42 --oo=42 367.rwl > winres\367.out 2> winres\367.err
fc winres\367.out testres\367.out.good
fc winres\367.err testres\367.err.good

rwloadsim -q --ooval 333 --oovalb=444 --ooswitch 367.rwl > winres\367.out 2> winres\367.err
fc winres\367.out testres\367.out.good
fc winres\367.err testres\367.err.good

rwloadsim -q -c 0.1 testuserinfo.rwl testdefault.rwl 368.rwl > winres\368.out 2> winres\368.err
fc winres\368.out testres\368.out.good
fc winres\368.err testres\368.err.good

rwloadsim -q 369.rwl > winres\369.out 2> winres\369.err
fc winres\369.out testres\369.out.good
fc winres\369.err testres\369.err.good

rwloadsim -q 370.rwl > winres\370.out 2> winres\370.err
fc winres\370.out testres\370.out.good
fc winres\370.err testres\370.err.good

rwloadsim -q 371.rwl > winres\371.out 2> winres\371.err
fc winres\371.out testres\371.out.good
fc winres\371.err testres\371.err.good

rwloadsim -q 372.rwl > winres\372.out 2> winres\372.err
fc winres\372.out testres\372.out.good
fc winres\372.err testres\372.err.good

rwloadsim -q 373.rwl > winres\373.out 2> winres\373.err
fc winres\373.out testres\373.out.good
fc winres\373.err testres\373.err.good

rwloadsim -q 374.rwl > winres\374.out 2> winres\374.err
fc winres\374.out testres\374.out.good
fc winres\374.err testres\374.err.good

rwloadsim -q 375.rwl > winres\375.out 2> winres\375.err
fc winres\375.out testres\375.out.good
fc winres\375.err testres\375.err.good

rwloadsim -q 376.rwl > winres\376.out 2> winres\376.err
fc winres\376.out testres\376.out.good
fc winres\376.err testres\376.err.good

rwloadsim -q 377.rwl > winres\377.out 2> winres\377.err
fc winres\377.out testres\377.out.good
fc winres\377.err testres\377.err.good

