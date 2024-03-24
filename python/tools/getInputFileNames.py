
import os
import re
import subprocess

def getInputFileNames(inputFilePath, inputFile_regex):
    inputFile_matcher = re.compile(inputFile_regex)
    inputFileNames = []
    files = os.listdir(inputFilePath)
    for file in files:
        if os.path.isdir(os.path.join(inputFilePath, file)):
            inputFileNames.extend(getInputFileNames(os.path.join(inputFilePath, file), inputFile_regex))
        else:
            # check if name of inputFile matches regular expression
            if inputFile_matcher.match(file):
                inputFileNames.append("file:%s" % os.path.join(inputFilePath, file))
    return inputFileNames
