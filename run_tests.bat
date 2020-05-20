@echo off
echo Valid html files: > tests_results.txt

for %%i in (.\valid_files\*) do (
	.\Debug\LexYacc.exe %%i > temp.txt
	echo|set /p=test: %%i,		result: >> tests_results.txt
	type temp.txt >> tests_results.txt
	del temp.txt
)

echo. >> tests_results.txt
echo Invalid html files: >> tests_results.txt

for %%j in (.\invalid_files\*) do (
	.\Debug\LexYacc.exe %%j > temp.txt
	echo|set /p=test: %%j,		result: >> tests_results.txt
	type temp.txt >> tests_results.txt
	del temp.txt
)
