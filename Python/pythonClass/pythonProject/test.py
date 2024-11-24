
import pandas as pd
import numpy as np
from pyecharts.charts import *
import pyecharts.options as opts
from pyecharts.commons.utils import JsCode
import matplotlib.pyplot as plt
import warnings

data = pd.read_csv('data.csv')

print(data.info())

print(data.head())
